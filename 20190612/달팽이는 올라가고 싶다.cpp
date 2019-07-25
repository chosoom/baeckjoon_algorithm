#include <iostream>
void up(int a, int b, int v) {
	int i;
	i = (v - a) / (a - b);
	if ((v - a) % (a - b) != 0) i++;
	std::cout << i+1;
}
int main() {
	int a, b, v;
	std::cin >> a >> b >> v;
	up(a, b, v);
}