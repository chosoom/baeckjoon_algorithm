#include <iostream>

using namespace std;
int main() {
	int cnt[10] = { 0, };
	int result=1,a,b,c;
	cin >> a >> b >> c;
	result = a*b*c;
	while (result != 0) {
		cnt[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; cout << cnt[i++] << endl);
}