#include <iostream>

using namespace std;

class client {
public:
	int *p;  //6�������� ī�� �� ����
	int d[6] = {1,1,1,1,1,1}; //6�������� �� �� ��ü���� 
	int s=0; //6�������� ī�� �� ����
	int m;  //6������ �� ��� ����
	int f=1; //6������ ��ü ��ü ���� ����

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


	cout << "ȸ�� ���� �Է��ϼ���: ";
	cin >> num;
	client *c = new client[num];
	for (int i = 0; i < num; i++) {
		cout << "6�������� ī�� ������ �Է��ϼ���: ";
		for (int j = 0; j < 6; j++) {
			cin >> p[j];
		}
		
		c[i] = client(p);
	}

	while (true) {
		cout << "1. ��ü�� �Է�\t2. ���ȸ�� ���\t3. ���α׷� ����\n";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "ȸ�� ��ȣ �Է�: ";
			cin >> code;
			cout << "��ü �� �Է�: ";
			cin >> d;
			c[code].set_d(d - 1);
			break;
		case 2:
			cnt = 0;
			for (int i = 0; i < num; i++) {
				if (c[i].m >= 100 && c[i].f != 0) {
					cout << "���ȸ��"<<cnt+1<<" �ڵ�: "<< i;
					cnt++;
				}
				cout << endl;
			}
			cout << "���ȸ�� �� ��: " << cnt << endl;
			break;
		case 3:
			return 0;
			break;
		}
	}

}