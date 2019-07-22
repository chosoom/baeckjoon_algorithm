#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	string str;
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	for (cin >> n; n > 0; n--) {
		cin >> str;
		int l = str.length();
		int cnt = 0,jum=0;
		for (int i = 0; i < l; i++) {
			if (str.at(i) == 'O') cnt += ++jum;
			else jum = 0;
		}
		cout << cnt << "\n";
	}
}