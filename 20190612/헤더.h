#include <iostream>
#include <ctime>
#include <string>

using namespace std;

inline void calc_jodiac(int y) {
	string dd[] = {"양","원숭이","닭","개","돼지","쥐","소","호랑이","토끼","용","뱀","말" };

	cout << dd[y % 12] << " 해 입니다.";
}

void calc_age(int y) {
	time_t currnt;
	struct tm*t;
	time(&currnt);
	t = localtime(&currnt);
	cout << "당신의 나이는 " << t->tm_year + 1900 - y + 1 << endl;
}