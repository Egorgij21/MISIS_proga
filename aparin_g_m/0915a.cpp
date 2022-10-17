#include <iostream>
#include <vector>
#include <algorithm>




int main() {
    int n(0), k(0);
    std::cin >> n >> k;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i += 1) {
        int a(0);
        std::cin >> a;
        vec[i] = a;
    }
    sort(vec.begin(), vec.end());
    for (int i = n - 1; i >= 0; i -= 1) {
        if (k % vec[i] == 0 && k >= vec[i]) {
            std::cout << k / vec[i];
            return 0;
        }
    }
}