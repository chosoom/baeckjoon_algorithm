#include <iostream>
#include <math.h>
bool sosu(int a) {
	if (a == 1) return false;
	for (int i = 2; i <= sqrt(a); i++) { if (a%i == 0)return false; }
	return true;
}
int main() {
	int t,cnt=0;
	for (std::cin >> t; t != 0;std::cin>>t) {
		for (int i = t+1; i <= 2 * t; i++) {
			if (sosu(i)) cnt++;
		}
		std::cout << cnt<< "\n";
		cnt = 0;
	}
}