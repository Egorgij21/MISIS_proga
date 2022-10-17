#include <iostream>
#include <vector>




int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        vec[a - 1] = i + 1;
    }
    for (int i = 0; i < n; i += 1)
        std::cout << vec[i] << " ";
}