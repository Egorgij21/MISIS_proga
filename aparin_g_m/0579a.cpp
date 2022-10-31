#include <iostream>



int main() {
    int x(0), ans(0);
    std::cin >> x;
    while (x != 0) {
        if (x & 1 != 0)
            ans += 1;
        x >>= 1;
    }
    std::cout << ans;
    return 0;
}