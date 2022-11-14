#include <iostream>
#include <vector>


int main() {
    int n = 0;
    std::cin >> n;
    std::vector<int> ans(200001);
    for (int i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        ans[a] = n - i;
    }
    int max_ans = 0;
    int number = 0;
    for (int i = 0; i < 200001; i++) {
        if (ans[i] != 0 && ans[i] > max_ans) {
            max_ans = ans[i];
            number = i;
        }
    }
    std::cout << number;
    return 0;
}