#include <iostream>
#include <cmath>

#define _USE_MATH_DEFINES



int factorial(int x) {
    int ans(1);
    if (x == 0)
        return ans;
    for (int i = 2; i <= x; i += 1) {
        ans *= i;
    }
    return ans;
}
float f(float x) {
    return exp(2 * x);
}


float s(float x, float eps) {
    double sum(0.0);
    double test(0.0);
    for (int i = 0; std::abs(sum - test) > eps or i == 0; i += 1) {
        test = sum;
        sum += pow(2 * x, i) / factorial(i);
    }
    return sum;
}



int main() {
    float x(0.0), a(0.1), eps(0.0001), b(1.1);
    std::cout << "x" << " | " << "s(x)" << " | " << "f(x)" << std::endl;
    for (x; x <= b; x += a)
        std::cout << x << " | " << s(x, eps) << " | " << f(x) << std::endl;
}