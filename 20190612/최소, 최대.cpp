#include <iostream>
using namespace std;
int main() {
	int i,max=-1000001,min=1000001,num;
	for (cin >> i; i > 0; i--) {
		cin >> num;
		if (num < min) min = num;
		if (num > max) max = num;
	}
	cout << min << " " << max;
}