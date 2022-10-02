#include <iostream>

int main() {
    int n(0);
    int test(0);
    std::cin >> n;
    int a(0), b(0), c(0), d(0);
    for (int i = n + 1; test != 1; i += 1) {
        a = i / 1000;
        b = (i - a * 1000) / 100;
        c = (i - a * 1000 - b * 100) / 10;
        d = i % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d) {
            std::cout << i;
            test = 1;
        }
    }
}
