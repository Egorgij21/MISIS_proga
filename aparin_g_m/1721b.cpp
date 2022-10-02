#include <iostream>

void corpus() {
    int n, m, sx, sy, d;
    std::cin >> n >> m >> sx >> sy >> d;
    if ((sx + d >= n && sy + d >= m) || (sx - d <= 1 && sy - d <= 1) || (sx + d >= n && sx - d <= 1) || (sy + d >= m && sy - d <= 1)) {
        std::cout << -1 << std::endl;
    }
    else {
        std::cout << n + m - 2 << std::endl;
    }
}

int main() {
    int k;
    std::cin >> k;
    for (k; k > 0; k -= 1) {
        corpus();
    }
}