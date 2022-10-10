#include <iostream>
#include <cmath>

int factorial(int x) {
    int ans(1);
    if (x == 0)
        return ans;
    for (int i = 2; i <= x; i += 1) {
        ans *= i;
    }
    return ans;
}

float s(float x, float eps) {
    double sum(0.0);
    double test(0.0);
    for (int i = 0; std::abs(test - sum) > eps or i == 0; i += 1) {
        test = sum;
        sum += pow(-1, i) * (pow(x, 2 * i)) / factorial(2 * i);
    }
    return sum;
}


int main() {
    float x(-1), a(0.1), eps(0.001), b(1.1);
    std::cout << "x" << " | " << "s(x)" << " | " << "f(x)" << std::endl;
    for (x; x <= b; x += a)
        std::cout << x << " | " << s(x, eps) << " | " << cos(x) << std::endl;
}