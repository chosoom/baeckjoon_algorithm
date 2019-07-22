#include <iostream>
#include <string>

using namespace std;
int main() {

	int n,s=0;
	cin >> n;

	string num;

	for (cin >> num; n>0; n--) {
		s += num.at(n-1) - '0';
	}
	cout << s;
	
}