#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>

void _3_to_10(std::vector<int> vec_b, int l) {
    int b = 0;
    int p = l - 1;
    for (int i = 0; i < l; i += 1, p -= 1) {
        b += vec_b[i] * pow(3, p);
    }
    std::cout << b;
}

void tor(std::vector<int> vec_a, std::vector<int> vec_c) {
    int l = vec_a.size();
    std::vector<int> vec_b;
    for (int i = 0; i < l; i += 1) {
        vec_b.push_back((3 + vec_c[i] - vec_a[i]) % 3);
    }
    std::reverse(vec_b.begin(), vec_b.end());
    _3_to_10(vec_b, l);
}



void _10_to_3(int a, int c) {
    std::vector<int> vec_a;
    std::vector<int> vec_c;
    int sum(0);
    while (a > 0) {
        vec_a.push_back(a - a / 3 * 3);
        a = a / 3;
    }
    while (c > 0) {
        vec_c.push_back(c - c / 3 * 3);
        c = c / 3;
    }
    if (vec_a.size() > vec_c.size())
        while (vec_a.size() > vec_c.size())
            vec_c.push_back(0);
    else if (vec_a.size() < vec_c.size())
        while (vec_a.size() < vec_c.size())
            vec_a.push_back(0);
    tor(vec_a, vec_c);
}

int main() {
    int a(0), c(0);
    std::cin >> a >> c;
    _10_to_3(a, c);
    return 0;
}