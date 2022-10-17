#include <iostream>
#include <vector>
#include <algorithm>


void funk() {
    int n = 0;
    std::cin >> n;
    std::vector<int> vec(n);
    int c(0);
    for (int i = 0; i < n; i += 1) {
        int a = 0;
        std::cin >> a;
        if (a == 0)
            c += 1;
        vec[i] = a;
    }
    sort(vec.begin(), vec.end());
    int g = 0;
    for (int i = 0; i < n; i += 1) {
        if (i != 0 && vec[i - 1] == vec[i])
            g = 1;
    }
    if (c > 0)
        std::cout << n - c << std::endl;
    else if (g == 1)
        std::cout << n << std::endl;
    else
        std::cout << n + 1 << std::endl;

}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}