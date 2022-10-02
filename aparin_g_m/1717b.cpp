#include <iostream>

void corpus() {
    int n, k, x, y, T;
    std::cin >> n >> k >> x >> y;
    T = (k + (y - 1) % k - (x - 1) % k);
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n; j += 1) {
            if ((i + T) % k == j % k) {
                std::cout << "X";
            }
            else {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}




int main() {
    int t;
    std::cin >> t;
    for (t; t > 0; t -= 1) {
        corpus();
    }
}