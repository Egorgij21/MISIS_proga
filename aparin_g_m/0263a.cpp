#include <iostream>
#include <cmath>
#include <vector>

int main() {
    int a{ 0 };
    for (int i = 0; i < 5; i += 1) {
        for (int j = 0; j < 5; j += 1) {
            std::cin >> a;
            if (a == 1) {
                std::cout << abs(2 - j) + abs(2 - i);
            }
        }
    }

}