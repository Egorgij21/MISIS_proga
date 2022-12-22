#include "geom.hpp"

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

struct variables {
    const double dt = 0.001, g = 9.8;
    double m, mu, k;
    double v=0.0, x=0.0, t=0.0, a=0.0, x_stable;
};


std::ifstream fin("вывод_данных.txt");
std::ofstream fout("вывод_данных.txt");

void head_txt() {
    std::string head = "t        m      mu        k          x            v            a";
    fin >> head;
    fout << head;
    fout << std::endl;
}

void fstr(variables& model) {
    fin >> model.t;
    fin >> model.m;
    fin >> model.mu;
    fin >> model.k;
    fin >> model.x;
    fin >> model.v;
    fin >> model.a;
    fout << model.t << "      ";
    fout << model.m << "      ";
    fout << model.mu << "      ";
    fout << model.k << "      ";
    fout << model.x << "      ";
    fout << model.v << "      ";
    fout << model.a << "      ";
    fout << std::endl;
}

void formulas_input() {
    std::ifstream fin_o("отчёт.txt");
    std::ofstream fout_o("отчёт.txt");
    std::string formulas;
    formulas = "k*dx +- mu*m*g = m*a";
    fin_o >> formulas;
    fout_o << formulas << '\n';
    formulas = "v = dx/dt; a = dv/dt";
    fin_o >> formulas;
    fout_o << formulas << '\n';
    fin_o.close();
    fout_o.close();
}

void data_input(variables& model) {
    std::cout << "все переменные вводите в система СИ" << '\n';
    std::cout << "введите массу m=";
    std::cin>> model.m;
    std::cout << '\n';
    std::cout << "введите коэфф трения мю mu=";
    std::cin >> model.mu;
    std::cout << '\n';
    while (model.mu < 0) {
        std::cout << "вы ввели некорректное значение, исправьтесь";
        std::cout << '\n';
        std::cout << "введите коэфф трения мю mu=";
        std::cin >> model.mu;
        std::cout << '\n';
    }
    std::cout << "введите жёсткость k=";
    std::cin >> model.k;
    std::cout << '\n';
    std::cout << "введите координату в момент времени t0 x0=";
    std::cin >> model.x;
    std::cout << '\n';
    std::cout << "введите координату положения равновесия x_stable=";
    std::cin >> model.x_stable;
    std::cout << '\n';
}

double force_projection(double co) {
    if (co > 0) {
        return 1.0;
    }
    else if (co < 0) {
        return -1.0;
    }
    return 0.0;
}

void initialization_of_model(variables& model) {
    model.t += model.dt;
    model.a = (model.k * (model.x_stable - model.x) - force_projection(model.v) * model.mu * model.m * model.g)/model.m;
    model.v += model.a * model.dt;
    model.x += model.v * model.dt;
}

void print_model(variables model) {
    for (int i = -30; i < std::abs(model.x/10); ++i) {
        std::cout << '.';
    }
    std::cout << '@';
    for (int i = std::abs(model.x/10) + 1; i <= 70; ++i) {
        std::cout << '.';
    }
    std::cout << std::endl;
}

void run_model(variables model) {
    while (model.t < 100) {
        for(int iter = 0; iter < 100; iter++) {
            initialization_of_model(model);
        }
        fstr(model);
        print_model(model);
    }
}


int main() {
    variables model;
    head_txt();
    formulas_input();
    for (int i = 1; i > 0; --i) {
        data_input(model);
        run_model(model);
    }
    fin.close();
    fout.close();
    return 0;
}