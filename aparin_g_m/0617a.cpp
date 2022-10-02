#include <iostream>

int main() {
    int n(0);
    std::cin >> n;
    if (n % 5 == 0)
        std::cout << n / 5;
    else if (n > 5)
        std::cout << n / 5 + 1;
    else
        std::cout << 1;

}