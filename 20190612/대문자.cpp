#include <iostream>

using namespace std;
int main() {

	char t;
	cout << "한 문자를 입력하세요: ";
	cin >> t;

	while(true) {
		cout << "대문자를 입력하세요: ";
		cin >> t;
		if (t >= 'A' && t <= 'Z') {
			for (int i = 0; i < 26; i++) {
				cout <<  (char)(t) << " ";
				if (t++ == 'Z')
					t = 'A';
			}
			cout << endl;
			break;
		}
	}
}