#include <iostream>

using namespace std;
int main() {

	char t;
	cout << "�� ���ڸ� �Է��ϼ���: ";
	cin >> t;

	while(true) {
		cout << "�빮�ڸ� �Է��ϼ���: ";
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