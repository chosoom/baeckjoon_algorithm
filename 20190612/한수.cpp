#include <iostream>
int cnt = 0;
void a(int b) {
	if (b < 100) { cnt += b; return; }
	int b_1, b_2,b1,a1,c = b;
	b_1 = c % 10;
	c = c / 10;
	b_2 = c % 10;
	while (c/10 != 0) {
		b1 = b_1 - b_2;
		b_1 = b_2;
		c = c / 10;
		b_2 = c % 10;
		a1 = b_1 - b_2;
		if (b1 == a1 && c/10 == 0) cnt++;
		else break;
	}
	a(b - 1);
}
int main() {
	int num;
	std::cin >> num;
	a(num);
	std::cout << cnt;
}