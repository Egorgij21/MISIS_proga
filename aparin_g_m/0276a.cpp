#include <iostream>

int main() {
    int n, time_, ple{ -1000000001 };
    std::cin >> n >> time_;
    for (int i{ 0 }; i < n; i += 1) {
        int time_i{ 0 }, ple_i{ 0 };
        std::cin >> ple_i >> time_i;
        if (time_i <= time_ && ple < ple_i) {
            ple = ple_i;
        }
        else if (time_i > time_ && ple < ple_i - time_i + time_) {
            ple = ple_i - time_i + time_;
        }
    }
    std::cout << ple;
}