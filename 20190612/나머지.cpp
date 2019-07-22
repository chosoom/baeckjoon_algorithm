#include <iostream>
using namespace std;
int main() {
	int cnt=0,j=0,num;
	int arr[10] = { 43,43,43,43,43,43,43,43,43,43};
	while (j++ < 10) {
		cin >> num;
		for (int i = 0; i <= cnt; i++) {
			if (num % 42 == arr[i]) break;
			if (arr[i] == 43) { arr[i] = num % 42; cnt++; break; }
		}
	}
	cout << cnt;
}