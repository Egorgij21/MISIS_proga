#include <iostream>
#include <vector>
#include <algorithm>


int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int& i : vec) {
        std::cin >> i;
    }
    std::sort(vec.begin(), vec.end());
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] > ans) {
            ans += 1;
        }
    }
    std::cout << ans;
    return 0;
}