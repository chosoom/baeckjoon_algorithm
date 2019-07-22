#include <iostream>

using namespace std;
int main() {
	int num;
	int i = 0;
	for (cin >> num; i < num; i++) {
		for (int j = num - 1; j >= 0; j--) {
			cout << (j >= num - i ? " " : "*");
		}
		cout << endl;
	}

}