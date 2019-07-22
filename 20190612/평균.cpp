#include <iostream>

using namespace std;
int main() {
	int i;
	double max = 0, sum = 0;
	cin >> i;
	double *num = new double[i];
	for (int j = 0; j < i;j++) {
		cin >> num[j];
		if (num[j] > max)
			max = num[j];
	}
	for (int j = 0; j < i; j++) { num[j] = num[j] / max * 100; sum += num[j]; }
	cout << (double)sum / i;
}