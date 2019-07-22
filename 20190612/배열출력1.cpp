#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;
int i, j, cnt, k, tab[5][5];

void print() {
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			cout << setw(4) << tab[i][j];
		}
		cout << endl;
	}
}


int main() {
	while (true) {
		cnt = 1;
		cout << "The Four Type of Matrix <1> <2> <3> <4>" << endl;
		cout << "프로그램 종료 하시려면 0을 누르세요" << endl;
		k = _getch() - '0';
		switch (k) {
		case 0:
			cout << "프로그램을 종료합니다." << endl;
			return 0;
		case 1:
			for (int i = 0; i < 5; i++) {
				for (int j = 0; j < 5; j++) {
					tab[i][j] = cnt++;
				}
			}
			break;
		case 2:
			for (int i = 4; i >= 0; i--) {
				for (int j = 0; j < 5; j++) {
					tab[j][i] = cnt++;
				}
			}
			break;
		case 3:
			for (int i = 4; i >= 0; i--) {
				for (int j = 0; j < 5; j++) {
					tab[i][j] = cnt++;
				}
			}
			break;
		case 4:
			for (int i = 0; i < 5; i++) {
				for (int j = 4; j >= 0; j--) {
					tab[j][i] = cnt++;
				}
			}
			break;
		}
		print();
	}
}