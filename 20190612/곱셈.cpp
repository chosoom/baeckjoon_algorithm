#include <iostream>
#include <string>
using namespace std;
int main() {
	int a;
	string  str;
	cin >> a >> str;

	for (int i = str.length()-1; i >=0 ; i--) {
		cout << a*(str.at(i) - '0') << endl;
	}
	cout << a*stoi(str);
}