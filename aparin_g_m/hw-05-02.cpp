#include <iostream>
#include <cmath>


#define _USE_MATH_DEFINES



int factorial(int x) {
    int ans(1);
    for (int i = 2; i <= x; i += 1) {
        ans *= i;
    }
    return ans;
}
double f(double x) {
    double fx = (x * sin(M_PI / 4)) / (1 - 2 * x * cos(M_PI / 4));
    return fx;
}

double s(double x, double eps) {
    double sum(0.0);
    double test(0.0);
    for (int i = 1; std::abs(sum - test) > eps or i == 1; i += 1){
        test = sum;
        sum += pow(x, i) * sin(i * (M_PI) / 4);
    }
    return sum;
}



int main() {
    double x(0), a(0.05), eps(0.001), b(1.05);
    std::cout << "x" << " | " << "s(x)" << " | " << "f(x)" << std::endl;
    for (x; x <= b; x += a)
        std::cout << x << " | " << s(x, eps) << " | " << f(x) << std::endl;
}