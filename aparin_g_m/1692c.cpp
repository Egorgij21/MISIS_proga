#include <iostream>
#include <string>
#include <vector>


void funk() {
    int x(1), y(1);
    std::string s("");
    std::vector<int> vec(8, 0);
    std::vector<std::string> str(8, "");
    for (int i = 0; i < 8; i += 1) {
        int c = 0;
        std::cin >> s;
        str[i] = s;
        for (int j = 0; j < 8; j += 1) {
            if (s[j] == '#')
                c += 1;
        }
        vec[i] = c;
    }
    for (int i = 1; i < 7; i += 1) {
        if (vec[i] == 1 && vec[i - 1] == 2 && vec[i + 1] == 2) {
            for (int j = 1; j < 7; j += 1) {
                if (str[i][j] == '#')
                    std::cout << i + 1 << " " << j + 1 << std::endl;
            }
        }
    }
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}