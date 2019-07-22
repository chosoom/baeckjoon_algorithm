#include <iostream>
using namespace std;
int cnt(int a) {
	if (a == 1) return 1;
	else return pow(2, a - 1) + cnt(a - 1);
}