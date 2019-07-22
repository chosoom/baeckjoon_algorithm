#include <iostream>
using namespace std;
int main() {
	int c, n, sum=0,cnt;
	double avg;
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	cout << fixed;
	cout.precision(3);
	for (cin >> c; c > 0; c--) {
		cin >> n;
		int *arr = new int[n];
		sum = 0;
		for (int i=0;i<n; sum += arr[i++]) {
			cin >> arr[i];
		}
		avg = (double)sum / n;
		cnt = 0;
		for (int i=0 ; i<n; i++) {
			if (arr[i] > avg) cnt++;
		}
		cout << (double)cnt / n *100<< "%\n";
	}
}