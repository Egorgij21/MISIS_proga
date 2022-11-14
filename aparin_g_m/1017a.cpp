#include <iostream>


int main() {
    int n = 0;
    std::cin >> n;
    int counter = 1;
    int tomas = 0;
    for (int i = 0; i < n; i++) {
        int a(0), b(0), c(0), d(0);
        std::cin >> a >> b >> c >> d;
        int sum = a + b + c + d;
        if (i == 0)
            tomas = sum;
        if (i != 0 && tomas < sum)
            counter++;
    }
    std::cout << counter;
    return 0;
}