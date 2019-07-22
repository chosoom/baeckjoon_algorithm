#include <iostream>

using namespace std;
int main() {
	int a, b;
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	while (cin >> a >> b) {
		cout << a + b << "\n";
	}
}