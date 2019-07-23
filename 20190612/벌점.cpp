#include <iostream>
using namespace std;
void a(int b) {
	int an = 0;
	for (int i = 1;; i++) {
		an = (3 * pow(i,2)) - (3 * i) + 1;
		cout << an << endl;
		if (an >= b) {
			cout << i ; break;
		}
	}
}
int main() {
	int num;
	cin >> num;
	a(num);
}