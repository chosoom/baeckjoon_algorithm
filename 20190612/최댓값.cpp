#include <iostream>
using namespace std;
int main() {
	int num[9], max=0 ,idx;
	int l = sizeof(num) / sizeof(int);
	for (int i = 0; i < l; i++) {
		cin >> num[i];
		if (max < num[i]) { max = num[i]; idx = i; }
	}
	cout << max << "\n" << idx+1;
}