#include <iostream>
#include <sstream>
#include <string>

using namespace std;
int main() {

	cout << "���ڿ��� �Է��ϼ���: ";
	string str;
	getline(cin,str);
	
	/*for (int i = str.length()-1; i >= 0; i--)
		cout << str.at(i);*/
	/*int r;
	string c;
	cout << "ġȯ�� ��ġ�� ���ڸ� �Է��ϼ��� : ";
	cin >> r >> c;
	str.replace(r-1, 1, c);
	*/
	
	int r;
	string c;
	cout << "������ ��ġ�� ���ڸ� �Է��ϼ��� : ";
	cin >> r >> c;
	str.insert(r-1, c);

	cout << str << endl;
}