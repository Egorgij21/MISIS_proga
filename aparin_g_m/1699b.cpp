#include <iostream>





void func() {
    int n(0), m(0);
    std::cin >> n >> m;
    bool flag = false;
    for (int lin = 0; lin < n; lin++) {
        if (lin % 2 == 0)
            flag ^= 1;
        flag ^= 1;
        for (int col = 0; col < m / 2; col++) {
            if ((col + flag) & 1) {
                std::cout << "1 " << "0 ";
            }
            else {
                std::cout << "0 " << "1 ";
            }
        }
        std::cout << std::endl;
    }
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}