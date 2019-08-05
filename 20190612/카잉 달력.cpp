#include <iostream>
using namespace std;
int gcd(int a, int b) {
	while (b != 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
int lcm(int a, int b) {
	return a*b/gcd(a, b);
}
void cal(int m,int n,int x,int y) {
	int max = lcm(m, n);
	for (int i = 0; x + i*m <= max; i++) {
		int cnt_y = (x + i*m) - n*((x + i*m) / n);
		if (cnt_y == y || n == y&& cnt_y == 0) {
			cout << x + i*m<<endl;
			return;
		}
	}
	cout << -1 << endl;
}
int main() {
	int num,m,n,x,y;
	for (cin >> num; num > 0; num--) {
		cin >> m >> n >> x >> y;
		cal(m, n, x, y);
	}	
}
