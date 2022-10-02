#include <iostream>
#include <string>
#include <vector>


int corpus() {
	int n(0), k(0), test(0), fiind(0);
	std::cin >> n >> k;
	std::string str("");
	std::cin >> str;
	int sum1(0);
	std::vector<int> vec(n, 0);
	for (int i = 0; i < n; i += 1) {
		if (str[i] == '0')
			vec[i] = -1;
		else if (str[i] == '1')
			vec[i] = 1;
		else
			fiind += 1;
	}
	if (fiind == n) {
		std::cout << "YES" << std::endl;
		return 0;
	}

	while (fiind > 0) {
		for (int l(0), r(k - 1); r + 1 <= n; l += 1, r += 1) {
			int counter = 0;
			for (int i = l; i <= r; i += 1) {
				counter += vec[i];
			}
			if (counter == k || counter == k * (-1)) {
				std::cout << "NO" << std::endl;
				return 0;
			}
			for (int i = l; i <= r; i += 1) {
				if (counter < 0) {
					if (vec[i] == 0) {
						vec[i] = 1;
						counter += 1;
					}
				}
				if (counter > 0) {
					if (vec[i] == 0) {
						vec[i] = -1;
						counter -= 1;
					}
				}
			}
		}
		fiind -= 1;
	}
	if (n % 2 == 0) {
		for (int i = 0; i < n; i += 1) {
			test += vec[i];
		}
		if (test == 0)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
	else {
		for (int i = 0; i < n; i += 1) {
			test += vec[i];
		}
		if (test == 1 || test == -1)
			std::cout << "YES" << std::endl;
		else
			std::cout << "NO" << std::endl;
	}
}




int main() {
	int t(0);
	std::cin >> t;
	for (int i = 0; i < t; i += 1)
		corpus();
}