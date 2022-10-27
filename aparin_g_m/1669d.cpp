#include <iostream>
#include <vector>



bool cmp(int ls, int rs, std::vector<int> vec) {
    int balance = 0;
    for (int i = ls + 1; i < rs; i += 1) {
        balance += vec[i];
    }
    if (balance != 0 && (balance == rs - ls - 1 || balance == -1 * (rs - ls - 1)))
        return true;
    return false;
}

void func() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n, 0);
    int counter = 0;
    int c_a = 0;
    int c_b = 0;
    for (int i = 0; i < n; i += 1) {
        char a = ' ';
        std::cin >> a;
        if (a == 'R') {
            c_a += 1;
            vec[i] = 1;
        }
        else if (a == 'B') {
            c_b += 1;
            vec[i] = -1;
        }
        else
            counter += 1;
    }
    if (n == 1 && counter != n) {
        std::cout << "NO" << std::endl;
        return;
    }
    if (c_a == n || c_b == n) {
        std::cout << "NO" << std::endl;
        return;
    }
    if (c_a == n || c_b == n) {
        std::cout << "NO" << std::endl;
        return;
    }
    if (counter == 0 || counter == n) {
        std::cout << "YES" << std::endl;
        return;
    }
    int ls = 0;
    int rs = -1;
    for (int i = 0; i < n; i += 1) {
        if (vec[i] == 0 || i == n - 1) {
            ls = rs;
            if (vec[i] == 0)
                rs = i;
            else
                rs = n;
            if ((rs - ls > 1 && cmp(ls, rs, vec)) || (i == n - 1 && cmp(ls, rs, vec))) {
                std::cout << "NO" << std::endl;
                return;
            }
        }
    }
    std::cout << "YES" << std::endl;
}





int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}