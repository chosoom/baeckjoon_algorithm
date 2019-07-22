#include <iostream>
#include <string>
using namespace std;
int main() {
	int a,b,c;
	string s;
	for (cin >> a; a > 0; a--) {
		cin >> b >> s;
		c = s.length();
		for (int i = 0; i < b*c; i+=b) {
			for (int j = 0; j < b - 1; j++) {
				s.insert(i, 1, s.at(i));
			}
		}
		cout << s <<endl;
	}
}