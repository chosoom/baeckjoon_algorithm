#include <iostream>
#include <ctime>
#include <string>

using namespace std;

inline void calc_jodiac(int y) {
	string dd[] = {"��","������","��","��","����","��","��","ȣ����","�䳢","��","��","��" };

	cout << dd[y % 12] << " �� �Դϴ�.";
}

void calc_age(int y) {
	time_t currnt;
	struct tm*t;
	time(&currnt);
	t = localtime(&currnt);
	cout << "����� ���̴� " << t->tm_year + 1900 - y + 1 << endl;
}