#include <iostream>
#include <string>




void func() {
    int n(0);
    char c(' ');
    std::cin >> n >> c;
    std::string str;
    std::cin >> str;
    std::string str2 = str;
    str += str2;
    int ls = 0;
    int flag = 0;
    int ans = -1;
    for (int i = 0; i < 2 * n; i++) {
        if (str[i] == c && flag == 0) {
            flag = 1;
            ls = i;
        }
        if (str[i] == 'g' && flag == 1) {
            if (ans < i - ls || ans == -1)
                ans = i - ls;
            flag = 0;
        }
    }
    std::cout << ans << std::endl;
}





int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}