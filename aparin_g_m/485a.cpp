#include <iostream>
#include <cmath>



int main() {
    long long a(0), m(0);
    std::cin >> a >> m;
    int iters = std::log2(m * a);
    for (int i = 0; i <= iters; i++) {
        long long p = std::pow(2, i);
        if (a * p % m == 0) {
            std::cout << "Yes";
            return 0;
        }
    }
    std::cout << "No";
}