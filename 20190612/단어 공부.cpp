#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int a[26] = { 0,};
	int max = 1, cnt = 0, idx;
	string s;
	getline(cin,s);
	transform(s.begin(), s.end(), s.begin(), toupper);
	for (int i = 0; i < s.length(); i++) 
		a[s.at(i) - 'A']+=2;
	for (int i = 0; i < 26; i++) {
		if (max < a[i]) { max = a[i]; idx = i; }
		else if (max == a[i]) { cnt++; }
	}
	char ch(idx + 65);
	if (cnt > 0) { cout << "?"; }
	else { cout << ch; }
}