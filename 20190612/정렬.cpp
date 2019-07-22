#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

int main() {
	list<int> l;

	int a=1,i;
	cout << "숫자를 입력하세요: (0 : 종료)"<<endl;

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
	
	cout << endl << "정렬완료!" << endl;
	cout << "찾고자 하는 값을 입력하세요 : ";
	cin >> a;
	iter = l.begin();
	for (i = 0; iter != l.end(); iter++) {
		if (*iter == a)
			break;
		i++;
	}
	if (iter == l.end())
		cout << "찾고자 하는 값 " << a << "는 존재하지 않습니다." << endl;
	else
		cout << "찾고자 하는 값 " << a << "는 " << i+1 << " 번째 방에 있습니다." << endl;
	
}