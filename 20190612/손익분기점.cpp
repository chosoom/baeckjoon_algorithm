#include <iostream>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (b > c) { cout << -1; return 0; }
	int x = a/(c-b) + 1;
	cout << x;
}