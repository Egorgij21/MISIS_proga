#include <iostream>
#include <vector>
#include <algorithm>


bool my_cmp(int a, int b) {
    int aa(a), bb(b);
    int ans_a(0), ans_b(0);
    if (aa % 2 == 0) {
        while (aa != 1 && aa % 2 == 0) {
            aa /= 2;
            ans_a += 1;
        }
    }
    if (bb % 2 == 0) {
        while (bb != 1 && bb % 2 == 0) {
            bb /= 2;
            ans_b += 1;
        }
    }
    if (ans_a > ans_b)
        return true;
    return false;
}

void func() {
    int n = 0;
    std::cin >> n;
    int counter = 0;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        vec[i] = i + 1;
        if (a % 2 == 0) {
            while (a != 1 && a % 2 == 0) {
                a /= 2;
                counter += 1;
            }
        }
    }
    if (counter >= n) {
        std::cout << 0 << std::endl;
        return;
    }
    std::sort(vec.begin(), vec.end(), my_cmp);
    int ans = 0;
    for (int i = 0; i < n && counter < n; i += 1) {
        int a = vec[i];
        if (a % 2 == 0) {
            while (a != 1 && a % 2 == 0) {
                a /= 2;
                counter += 1;
            }
        }
        ans += 1;
    }
    if (counter >= n) {
        std::cout << ans << std::endl;
    }
    else {
        std::cout << -1 << std::endl;
    }
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}