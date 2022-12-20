#include <iostream>
#include <cmath>




double factorial(double i) {
    double fact = 1;
    for(;i > 1; i--) {
        fact *= i;
    }
    return fact;
}

double function(double x, double eps) {
    double sum = 0.0;
    double sum1 = 0.0;
    for(int i = 0; std::abs(sum - sum1) > eps || i == 0; i++) {
        sum1 = sum;
        sum += pow(2*x, i)/factorial(i);
    }
    return sum;
}

int main() {
    double x = 0.1;
    double eps = 0.0001;
    double dx = 0.05;
    for (; x <= 1; x += dx) {
        std::cout << function(x, eps) << std::endl;
    }
    return 0;
}
