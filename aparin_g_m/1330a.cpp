#include <iostream>
#include <vector>

void mass() {
    std::vector<int> vec(202, false);
    int points, array;
    std::cin >> array >> points;
    for (int i = 0; i < array; i += 1) {
        int v;
        std::cin >> v;
        vec[v] = true;
    }
    int j = 0;
    while (points >= 0) {
        j += 1;
        if (!vec[j]) {
            points -= 1;
        }
    }
    std::cout << j - 1 << std::endl;
}

int main() {
    int k;
    std::cin >> k;
    for (k; k > 0; k -= 1) {
        mass();
    }
    return 0;
}