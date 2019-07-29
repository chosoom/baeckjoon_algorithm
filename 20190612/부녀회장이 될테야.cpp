#include <iostream>
using namespace std;
void people(int k, int n) {
	int f[15][15] = {0,},i,j;
	if (n == 1) cout << 1 << endl;
	else {
		for (i = 0; i <= (k > n ? k: n); i++) {
			for (j = i; j <= (k > n ? k : n); j++) {
				if (i == 0) { f[i][j] = j + 2; f[j][i] = j + 2; }
				else {
					f[i][j] = f[i - 1][j] + f[i][j - 1];
					f[j][i] = f[i][j];
				}
				if ((i == k&&j == n-2) || (i == n-2  && j == k)) { cout << f[k][n - 2] << endl; return; }
			}
		}
	}
	//cout << f[k][n - 2] << endl;
}

int main() {
	int num,k,n;
	for (cin >> num; num > 0; num--) {
		cin >> k >> n;
		people(k, n);
	}
}