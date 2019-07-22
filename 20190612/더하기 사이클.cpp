#include <iostream>
using namespace std;
int main() {
	int n,a,b,c,cnt=0,tmp;
	cin >> n;
	if (n < 10) { a = 0; b = n; }
	else { a = n / 10; b = n % 10; }
	c = n;
	do {
		cnt++;
		tmp = a;
		a = b;
		b = (tmp + b)%10;
		c = a * 10 + b;
	} while (n != c);
	cout << cnt;
}