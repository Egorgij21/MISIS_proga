#include <iostream>
#include <string>



void funk() {
    std::string str("");
    std::cin >> str;
    if (str.size() == 1) {
        std::cout << "NO" << std::endl;
        return;
    }
    for (int i = 0; i < str.size(); i += 1) {
        if (str[i - 1] != str[i] && str[i + 1] != str[i]) {
            std::cout << "NO" << std::endl;
            return;
        }
    }
    std::cout << "YES" << std::endl;
}


int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}