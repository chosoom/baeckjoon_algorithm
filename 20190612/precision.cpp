#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	double a = 1.123456789;

	cout << a << endl;

	streamsize prec = cout.precision();
	
	cout << setprecision(8) << a << setprecision(prec) << endl;

	cout << a;
}