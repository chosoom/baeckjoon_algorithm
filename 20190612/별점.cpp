#include <iostream>
using namespace std;
int a(int b) {
	int sum = 1;
	for (int i = 0; sum < b; i++) {
		sum += i;
	}
}