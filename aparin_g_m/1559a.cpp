#include <iostream>
#include <vector>

void funk() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        vec.push_back(a);
    }
    int ans = vec[0];
    for (int i = 0; i < n; i += 1) {
        ans &= vec[i];
    }
    std::cout << ans << std::endl;
}


int main() {
    int t = 0;
    std::cin >> t;
    for (int i = 0; i < t; i += 1)
        funk();
}