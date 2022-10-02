#include <iostream>
#include <string>
#include <vector>

void corpus() {
    bool a = true;
    int len_s, k, counter(0), test1(0), test2(0), minus(0);
    std::string str, key;
    std::string vec;
    std::cin >> len_s >> str >> k;
    for (k; k > 0; k -= 1) {
        std::cin >> key;
        vec += key;
    }
    int d = str.size();
    while (test2 == counter) {
        for (int i = 0; i < d; i += 1) {
            for (int j = 0; j < vec.size(); j += 1) {
                if (str[i + minus] == vec[j] && i != 0) {
                    test1 += 1;
                    str.erase(i + minus - 1, 1);
                    minus -= 1;
                }
            }
            //            std::cout << str << " " << i + minus << " " << i <<  std::endl;
        }
        minus = 0;
        if (test1 > 0) {
            counter += 1;
            test1 = 0;
        }
        test2 += 1;
    }
    std::cout << counter << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    for (int m = 0; m < t; m += 1)
        corpus();
}