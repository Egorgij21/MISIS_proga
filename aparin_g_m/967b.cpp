#include <iostream>
#include <vector>
#include <algorithm>




bool my_cmp(const int& a, const int& b) {
    if (a > b)
        return true;
    return false;
}

int main() {
    int n(0), a(0), b(0);
    std::cin >> n >> a >> b;
    std::vector<int> vec(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int s = 0;
        std::cin >> s;
        vec[i] = s;
        sum += s;
    }
    std::sort(vec.begin() + 1, vec.end(), my_cmp);
    for (int i = 1; i <= n; i++) {
        if (vec[0] * a / sum >= b) {
            std::cout << i - 1;
            return 0;
        }
        if (i != n) {
            sum -= vec[i];
        }
    }
}