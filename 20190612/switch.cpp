#include <iostream>

using namespace std;
int main() {

	int n, m, i;
	char c;
	cin >> n >> c >> m;

	switch (c) {
	case '+':
		cout << n << " + " << m << " = " << n + m << endl;
		break;
	case '-':
		cout << n << " - " << m << " = " << n - m << endl;
		break;
	case '*':
		cout << n << " * " << m << " = " << n * m << endl;
		break;
	case '/':
		cout << n << " / " << m << " = " << (float)n / m << endl;
		break;
	case '%':
		cout << n << " % " << m << " = " << n % m << endl;
		break;
	}
	cout << "================================" << endl;
	cout << "C++ ���� �Է�: ";
	cin >> n;
	cout << "JAVA ���� �Է�: ";
	cin >> m;
	cout << "Python ���� �Է�: ";
	cin >> i;

	int avg = (int)(n + m + i) / 3;

	cout << "���: " << avg << endl;
	switch (avg/10)
	{
	case 9:
		cout << "����: A" << endl;
		break;
	case 8:
		cout << "����: B" << endl;
		break;
	case 7:
		cout << "����: C" << endl;
		break;
	case 6:
		cout << "����: D" << endl;
		break;	
	default:
		cout << "����: F" << endl;
		break;
	}
}