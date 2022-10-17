#include <iostream>
#include <vector>

void funk() {
    int n(0), tme(0);
    std::cin >> n;
    std::vector<int> vec;
    for (int i = 0; i < n; i += 1) {
        int a(0), b(0);
        std::cin >> a >> b;
        vec.push_back(a);
        vec.push_back(b);
    }
    int counter(0), tmm(0);
    for (int i = 0; i < 2 * n; i += 2) {
        int tm(0);
        std::cin >> tm;
        if (i == 0)
            tme += tm + vec[i];
        else
            tme += tm + vec[i] - vec[i - 1];
        if ((((vec[i + 1] - vec[i]) / 2 >= vec[i + 1] - tme && (vec[i + 1] - vec[i]) % 2 == 0) || ((vec[i + 1] - vec[i] + 1) / 2 >= vec[i + 1] - tme && (vec[i + 1] - vec[i]) % 2 == 1)) && i != 2 * n - 2) {
            if ((vec[i + 1] - vec[i]) % 2 == 0)
                tme += (vec[i + 1] - vec[i]) / 2;
            else
                tme += (vec[i + 1] - vec[i] + 1) / 2;
        }
        else if (i != 2 * n - 2)
            tme += vec[i + 1] - tme;
    }
    std::cout << tme << std::endl;
}



int main() {
    int t = 0;
    std::cin >> t;
    while (t--)
        funk();
    return 0;
}