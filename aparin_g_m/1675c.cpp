#include <iostream>
#include <string>


void func() {
    std::string str;
    std::cin >> str;
    int ls = 0;
    int rs = str.size() - 1;
    int c_0 = 0;
    for (int i = 0; i < str.size(); i += 1) {
        if (str[i] == '0' && c_0 == 0) {
            c_0 = 1;
            rs = i;
        }
        if (str[i] == '1' && c_0 == 0) {
            ls = i;
        }
    }
    std::cout << rs - ls + 1 << std::endl;
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}