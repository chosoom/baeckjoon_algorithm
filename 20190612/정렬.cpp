#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

int main() {
	list<int> l;

	int a=1,i;
	cout << "���ڸ� �Է��ϼ���: (0 : ����)"<<endl;

	while (true) {
		cin >> a;
		if (a == 0)
			break;
		l.push_back(a);
	}

	list<int>::iterator iter;
	l.sort();
	
	for (iter = l.begin(); iter != l.end(); iter++)
		cout << setw(4) << *iter;
	
	cout << endl << "���ĿϷ�!" << endl;
	cout << "ã���� �ϴ� ���� �Է��ϼ��� : ";
	cin >> a;
	iter = l.begin();
	for (i = 0; iter != l.end(); iter++) {
		if (*iter == a)
			break;
		i++;
	}
	if (iter == l.end())
		cout << "ã���� �ϴ� �� " << a << "�� �������� �ʽ��ϴ�." << endl;
	else
		cout << "ã���� �ϴ� �� " << a << "�� " << i+1 << " ��° �濡 �ֽ��ϴ�." << endl;
	
}