#include <iostream>

using namespace std;
int main() {

	int n;
	cin >> n;

	int max,mod;
	max = n / 5;
	while (true) {
		mod = n-max*5;
		if (mod % 3 == 0) {
			cout << mod / 3 + max<<endl;
			break;
		}
		max--;
		if (max < 0) {
			cout << -1<<endl;
			break;
		}
	}

	//정리본! 기억하기 짧게 정리해서 이용할 수 있도록 고민하기
	for (max = n / 5; max >= 0 && (n - max * 5) % 3 != 0; max--);
	if (max < 0) printf("-1");
	else cout << max + (n - 5 * max) / 3;
 }