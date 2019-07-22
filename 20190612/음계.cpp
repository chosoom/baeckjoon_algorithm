#include <iostream>
using namespace std;
int main() {
	int num[8],i=0;
	for (cin >> num[i++]; i < 8; i++) {
		cin >> num[i];
		if (abs(num[i] - num[i - 1]) != 1) { cout << "mixed"; break; }
	}
	if (i == 8) {
		cout << (num[0] == 1 ? "ascending" : "descending");
	}
}