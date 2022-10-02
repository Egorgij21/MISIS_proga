#include <iostream>
#include <vector>
#include <string>


void corpus() {
	int n;
	std::cin >> n;
	std::vector<int> vec;
	for (int _ = 0; _ < n; _ += 1) {
		int a;
		std::cin >> a;
		vec.push_back(a);
	}
	for (int i = 0; i < n; i += 1) {
		int b;
		std::cin >> b;
		std::string str;
		std::cin >> str;
		for (int k = 0; k < b; k += 1) {
			if (str[k] == 'D') {
				vec[i] += 1;
			}
			else {
				vec[i] -= 1;
			}
		}
		std::cout << (vec[i] % 10 + 10) % 10 << " ";
	}
	std::cout << std::endl;
}


int main() {
	int t;
	std::cin >> t;
	for (t; t > 0; t -= 1) {
		corpus();
	}
}