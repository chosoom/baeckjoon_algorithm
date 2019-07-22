#include <iostream>
#include <string>
using namespace std;
int main() {
	string str[] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	string s;
	cin >> s;
	int l = sizeof(str) / sizeof(string) ,cnt=0,i;
	for (;s != "";) {
		for (i = 0; i < l; i++) {
			if (0 == s.find(str[i])) { cnt++; s = s.substr(str[i].length(), s.length() - str[i].length()); break; }
		}
		if (i == l) { cnt++; s = s.substr(1, s.length() - 1);
		}
	}
	cout << cnt;
}