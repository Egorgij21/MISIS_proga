#include <iostream>
#include <string>
#include <vector>



void funk() {
    int n(0), m(0);
    std::cin >> n >> m;
    int x(0), y(0), c(0);
    std::string s("");
    std::vector<std::string> vec(n, "");
    for (int i = 0; i < n; i += 1) {
        std::cin >> s;
        vec[i] = s;
        for (int j = 0; j < m; j += 1) {
            if (c == 0 && s[j] == 'R') {
                c = 1;
                x = j;
                y = i;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i += 1) {
        if (i < y)
            for (int j = 0; j < m; j += 1) {
                if (vec[i][j] == 'R')
                    ans = 1;
            }
        else
            for (int j = 0; j < x; j += 1) {
                if (vec[i][j] == 'R')
                    ans = 1;
            }
    }
    if (ans)
        std::cout << "NO" << std::endl;
    else
        std::cout << "YES" << std::endl;
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}