#include <iostream>
using namespace std;
void fly(long x,long y) {
	int length = y - x, i, cnt = 1,sw=1 ,cnt2=1;
	for (i = 1; i*2 <= length;) {
		if (sw>2) {
			cnt2++; sw = 1;
		}
		i += cnt2;
		if (i > length) break;
		sw++;
		cnt++;
	}
	cout << cnt <<endl;
}
int main() {
	long num, x, y;
	for (cin >> num; num > 0; num--) {
		cin >> x >> y;
		fly(x, y);
	}
}
