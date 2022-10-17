#include <iostream>
#include <vector>

void funk() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        vec[i] = a;
    }
    int co_0(0), co_1(0), test(0), tt(0);
    for (int i = 0; i < n; i += 1) {
        if (co_0 == 0 && vec[i] == 1)
            co_1 += 1;
        if (test == 0 && vec[i] == 0)
            co_0 += 1;
        if (co_1 != 0 && co_0 != 0 && vec[i] == 1 && vec[i - 1] == 0) {
            test = i;
            tt += 1;
        }
    }
    if (test != 0 && tt > 1)
        std::cout << test - co_1 + 1 << std::endl;
    else if (co_0 == 0)
        std::cout << co_0 << std::endl;
    else
        std::cout << co_0 + 1 << std::endl;
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}
