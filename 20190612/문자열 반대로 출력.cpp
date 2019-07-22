#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {

	cout << "문자열을 입력하세요: ";
	string str;
	getline(cin,str);
	
	/*for (int i = str.length()-1; i >= 0; i--)
		cout << str.at(i);*/
	/*int r;
	string c;
	cout << "치환할 위치와 문자를 입력하세요 : ";
	cin >> r >> c;
	str.replace(r-1, 1, c);
	*/
	
	int r;
	string c;
	cout << "삽입할 위치와 문자를 입력하세요 : ";
	cin >> r >> c;
	str.insert(r-1, c);

	cout << str << endl;
}