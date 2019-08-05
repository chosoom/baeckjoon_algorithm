#include <iostream>
#include <math.h>
bool sosu(int a) {
	if (a == 1) return false;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a%i==0) return false;
	}
	return true;
}
int main() {
	int m, n;
	std::cin >> m >> n;
	for (int i = m; i <= n; i++) {
		if (sosu(i)) std::cout << i << "\n";
	}
}