#include <iostream>
#include <math.h>
bool sosu(int a) {
	if (a == 1) return false;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a%i == 0)
			return false;
	}
	return true;
}
int main() {
	int t,num,cnt=0;
	for (std::cin >> t; t > 0; t--) {
		std::cin >> num;
		if (sosu(num)) cnt++;
	}
	std::cout << cnt;
}