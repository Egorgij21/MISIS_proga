#include <iostream>
#include <queue>


int main() {
    long long n = 0, k = 0;
    std::cin >> n >> k;
    std::queue<int> que;
    for (long long i = 0; i < n; i++) {
        int a = 0;
        std::cin >> a;
        que.push(a);
    }
    int a = que.front();
    que.pop();
    int b = 0;
    for (long long i = 0; i < k; i++) {
        b = que.front();
        que.pop();
        if (a < b) {
            std::swap(a, b);
            i = 0;
        }
        que.push(b);
        if (i > n + 1) {
            std::cout << a;
            return 0;
        }
    }
    std::cout << a;
    return 0;
}