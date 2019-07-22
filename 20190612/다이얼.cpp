#include <string>
#include <iostream>
using namespace std;
int main() {
	string str;
	int sum=0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str.at(i) >= 'W') sum += 10;
		else if (str.at(i) < 'W'&&str.at(i) >= 'T') sum += 9;
		else if (str.at(i) >= 'P'&&str.at(i) <= 'S') sum += 8;
		else sum += (str.at(i) - 'A') / 3 + 3;
	}
	cout << sum;
}