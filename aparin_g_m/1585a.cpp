#include <iostream>
#include <vector>

void funk() {
    int n(0);
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i += 1) {
        int a(0);
        std::cin >> a;
        vec[i] = a;
    }
    int len(1), test(0);
    for (int i = 0; i < n; i += 1) {
        if (vec[i] == 0);
        test += 1;
        if (i != 0 && vec[i] == 1 && vec[i - 1] == 1) {
            len += 5;
            test = 0;
        }
        else if (vec[i] == 1) {
            len += 1;
            test = 0;
        }
        if (test == 2) {
            std::cout << -1 << std::endl;
            return;
        }
    }
    std::cout << len << std::endl;
}



int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}