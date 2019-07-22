#include <iostream>
#include <string>

using namespace std;

int main() {
	int md[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string wd[] = { "월요일","화요일","수요일","목요일","금요일","토요일"};

	int m, d;
	cin >> m>> d;
	if (d == 0) {
		return 0;
	}
	int nal = 0, dal = m - 1;
	if (dal != 0) {
		int i = 0;
		do {
			nal += md[i++];
		} while (i < dal);

	}
	nal += d - 1;


	int v = nal,w = nal - v,x=w+2;


	if (x > 7) {
		x = x - 7;

	}
	cout << wd[x] <<endl;
}