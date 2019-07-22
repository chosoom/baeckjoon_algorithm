#include <iostream>
#include <string>
using namespace std;

int main() {
	int month[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string wd[] = { "SUN", "MON","TUE","WED","THU","FRI","SAT"};
	int m,d;

	cin >> m >> d;

	if (m != 1) {
		for(int i=m-2;i>=0;i--)
			d += month[i];
	}

	cout << wd[d % 7] << endl;
}