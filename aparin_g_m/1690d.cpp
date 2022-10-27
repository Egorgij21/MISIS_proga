#include <iostream>
#include <string>



void func() {
    int n(0), k(0);
    std::cin >> n >> k;
    std::string str;
    std::cin >> str;
    int counter = -1;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (i < k) {
            if (str[i] == 'W')
                c++;
        }
        else {
            if (str[i] == 'W')
                c++;
            if (str[i - k] == 'W')
                c--;
        }
        if (c == 0 && i >= k - 1) {
            std::cout << 0 << std::endl;
            return;
        }
        if ((counter > c && c > 0) || (counter == -1 && i >= k - 1 && c > 0))
            counter = c;
    }
    std::cout << counter << std::endl;
}





int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        func();
    return 0;
}