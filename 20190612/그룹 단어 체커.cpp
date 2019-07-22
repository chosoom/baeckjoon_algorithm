#include <iostream>
#include <string>
using namespace std;
int main() {
	int i, cnt=0,num;
	string s;
	for (cin >> num; num > 0; num--) {
		int a[26] = { 0, };
		bool judge = true;
		cin >> s;
		for (i = 0; i < s.length(); i++) {
			if (i != 0) {
				if (s.at(i - 1) != s.at(i) && a[s.at(i) - 'a'] != 0) { judge = false; break; }
				else a[s.at(i) - 'a']++;
			}
			else a[s.at(i) - 'a']++;
		}
		if (judge) cnt++;
	}
	cout << cnt;
}