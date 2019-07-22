#include <iostream>
#include <string>

using namespace std;
int main() {
	string str;
	int i = 0,l;

	cin >> str;
	
	for (l = str.length(); i < l; i+=10) {
		if (i + 10 >= l) {
			cout << str.substr(i, l-i)<<endl;
			break;
		}
		cout << str.substr(i, 10) << endl;
	}
}