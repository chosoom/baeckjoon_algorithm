#include <iostream>
#include <math.h>
bool sosu(int a) {
	if (a == 1) return false;
	for (int i = 2; i <= sqrt(a); i++) {
		if (a%i == 0) return false;
	}
	return true;
}
void a(int m, int n) {
	int sum = 0, min = 10001;
	for (int i = m; i <= n; i++) {
		if (sosu(i)) { sum += i; if (min > i) min = i; }
	}
	if (sum == 0) std::cout << -1 << std::endl;
	else std::cout << sum << "\n" << min;
}
int main() {
	int m, n;
	std::cin >> m >> n;
	a(m, n);
}