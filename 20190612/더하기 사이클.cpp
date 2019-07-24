#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;
int main() {
	string num;
	char a, b;
	char cc, dc;
	cin >> num;
	if (num.length() < 2) { a = '0'; b = num.at(0); }
	else { a = num.at(0); b = num.at(1); }
	int c = a-'0', d = b-'0',cnt=0;
	cout << a << " " << b << endl;
	do {
		cnt++;
		int tmp = c;
		c = d;
		d = (tmp + d)%10;
		cout <<c<<" "<< d<<endl;
		itoa(c, &cc, 10);
		itoa(d, &dc, 10);

	} while (a!=cc && b != dc);
	cout << cnt;
}