#include <iostream>

using namespace std;

class client {
public:
	int *p;  //6개월간의 카드 월 사용액
	int d[6] = {1,1,1,1,1,1}; //6개월간의 월 별 연체여부 
	int s=0; //6개월간의 카드 총 사용액
	int m;  //6개월간 월 평균 사용액
	int f=1; //6개월간 전체 연체 여부 보관

	client() {};
	client (int _p[]) {
		p = _p;
		for (int i = 0; i < 6; i++) {
			s += p[i];
		}
		m = s / 6;
	}

	void client::set_d(int i) {
		d[i] = 0;
		f = 0;
	}
};

int main() {
	int cnt,num,p[6],choice,d,code;


	cout << "회원 수를 입력하세요: ";
	cin >> num;
	client *c = new client[num];
	for (int i = 0; i < num; i++) {
		cout << "6개월간의 카드 사용액을 입력하세요: ";
		for (int j = 0; j < 6; j++) {
			cin >> p[j];
		}
		
		c[i] = client(p);
	}

	while (true) {
		cout << "1. 연체일 입력\t2. 우수회원 출력\t3. 프로그램 종료\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "회원 번호 입력: ";
			cin >> code;
			cout << "연체 월 입력: ";
			cin >> d;
			c[code].set_d(d - 1);
			break;
		case 2:
			cnt = 0;
			for (int i = 0; i < num; i++) {
				if (c[i].m >= 100 && c[i].f != 0) {
					cout << "우수회원"<<cnt+1<<" 코드: "<< i;
					cnt++;
				}
				cout << endl;
			}
			cout << "우수회원 총 수: " << cnt << endl;
			break;
		case 3:
			return 0;
			break;
		}
	}

}