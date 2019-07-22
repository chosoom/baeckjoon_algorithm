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
	cout << "C++ 점수 입력: ";
	cin >> n;
	cout << "JAVA 점수 입력: ";
	cin >> m;
	cout << "Python 점수 입력: ";
	cin >> i;

	int avg = (int)(n + m + i) / 3;

	cout << "평균: " << avg << endl;
	switch (avg/10)
	{
	case 9:
		cout << "학점: A" << endl;
		break;
	case 8:
		cout << "학점: B" << endl;
		break;
	case 7:
		cout << "학점: C" << endl;
		break;
	case 6:
		cout << "학점: D" << endl;
		break;	
	default:
		cout << "학점: F" << endl;
		break;
	}
}