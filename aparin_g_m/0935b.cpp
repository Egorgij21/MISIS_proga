#include <iostream>
#include <vector>


int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n);
    int t(0);
    for (int i = 0; i < n; i += 1) {
        char a;
        std::cin >> a;
        if (a == 'U') {
            vec[i] = -1;
            t -= 1;
        }
        else {
            vec[i] = 1;
            t += 1;
        }
    }
    if (t * (-1) == n || t == n) {
        std::cout << 0;
        return 0;
    }
    int counter(0), balance(0), test(0);
    for (int i = 0; i < n; i += 1) {
        balance += vec[i];
        if (i >= 1)
            test = balance - vec[i] - vec[i - 1];
        if (balance * test < 0)
            counter += 1;
    }
    std::cout << counter;
}