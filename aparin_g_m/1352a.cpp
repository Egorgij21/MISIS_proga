#include <iostream>


int main() {
    int k, n;
    std::cin >> k;
    for (int i = 0; i < k; i += 1) {
        std::cin >> n;
        int a{ n / 1000 }, b{ n / 100 % 10 }, c{ n / 10 % 10 }, d{ n % 10 }, count{ 0 }, dd{ 1000 };
        int arr[4] = { a, b, c, d };
        for (int j = 1; j <= 4; j += 1) {
            if (arr[j - 1] != 0) {
                count += 1;
                arr[j - 1] = { arr[j - 1] * dd };
            }
            dd /= 10;
        }
        if (n == 10000) {
            std::cout << 1 << "\n";
            std::cout << n << "\n";
        }
        else {
            std::cout << count << "\n";
            for (int l = 0; l <= 4; l += 1) {
                if (arr[l] != 0 && arr[l] < 10000 && arr[l] > 0) {
                    std::cout << arr[l] << "\n";
                }
            }
        }
    }
}