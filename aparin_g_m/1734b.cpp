#include <iostream>

void funk() {
    int n = 0;
    std::cin >> n;
    for (int i = 1; i <= n; i += 1) {
        int counter = i;
        while (counter > 0) {
            if (counter == i || counter == 1)
                std::cout << 1 << " ";
            else
                std::cout << 0 << " ";
            counter -= 1;
        }
        std::cout << std::endl;
    }
}

int main() {
    int t(0);
    std::cin >> t;
    for (int i = 0; i < t; i += 1)
        funk();
    return 0;
}