#include <iostream>
#include <string>

using namespace std;

int main() {

	string str;

	cout << "2진수 입력:";
	cin >> str;
	int i = 0;
	int l = str.length();
	if (str.at(i) == '1') {
		for (; i < l; i++) {
			if (str.at(i) == '1')
				str.replace(i, 1, "0");
			else
				str.replace(i, 1, "1");
		}
		for (i = l - 1; str.at(i) == '1'; i--) {
			str.replace(i, 1, "0");
		}
		str.replace(i, 1, "1");
		cout <<" 보수 결과:"<< str << endl;

	}
	int s = 0,j=1;

	for (i = l - 1; i > 0; i--) {
		s+=(str.at(i) - '0')*j;
		j *= 2;
	}

	cout <<"10진수 변환 결과: "<< s << endl;
}