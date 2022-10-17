#include <iostream>
#include <string>
#include <vector>
#include <cmath>


void funk() {
    int n(0);
    std::cin >> n;
    std::vector<std::string> vec(n, "");
    std::string s("");
    for (int i = 0; i < n; i += 1) {
        std::cin >> s;
        vec[i] = s;
    }
    int x1(0), x2(0), y1(0), y2(0);
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n; j += 1) {
            if (vec[i][j] == '*' && x1 == 0 && y1 == 0) {
                y1 = i;
                x1 = j;
            }
            else if (vec[i][j] == '*') {
                y2 = i;
                x2 = j;
            }
        }
    }
    if (x1 == x2) {
        vec[y1][std::abs(x1 - 1)] = '*';
        vec[y2][std::abs(x2 - 1)] = '*';
    }
    else if (y1 == y2) {
        vec[std::abs(y1 - 1)][x1] = '*';
        vec[std::abs(y2 - 1)][x2] = '*';
    }
    else {
        vec[y2][x1] = '*';
        vec[y1][x2] = '*';
    }
    for (int i = 0; i < n; i += 1) {
        for (int j = 0; j < n; j += 1) {
            std::cout << vec[i][j];
        }
        std::cout << std::endl;
    }
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}