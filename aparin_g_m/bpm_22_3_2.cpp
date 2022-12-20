#include <iostream>
#include <cmath>
#include <fstream>
#include <string>

std::ifstream fin("вывод_данных.txt");
std::ofstream fout("вывод_данных.txt");


std::string func(double x, double y) {
    if(x*x + y*y >= 1 && abs(x) <= 2 && abs(y) <= 1) {
        return "YES";
    }
    else {
        return "NO";
    }
}

double dola(std::string ans, double dol) {
    if (ans == "YES") {
        dol++;
    }
    return dol;
}


int f_out(double x, double y, double dol) {
    std::string answer=func(x, y);
    dol = dola(answer, dol);
    fin >> answer;
    fout << answer;
    fout << '\n';
    return dol;
}

int main() {
    int i = 0;
    std::cout << "введите колличество вводов в консоль";
    std::cin >> i;
    double dol = 0.0;
    int counter = i;
    while(i--) {
        double x(0.0), y(0.0);
        std::cout << "введите х и у" << std::endl;
        std::cin >> x >> y;
        dol = f_out(x, y, dol);
    }
    dol /= counter;
    std::cout << "доля попаданий в область: " << dol << std::endl;
    fin.close();
    fout.close();
}