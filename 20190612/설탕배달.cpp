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

	//������! ����ϱ� ª�� �����ؼ� �̿��� �� �ֵ��� ����ϱ�
	for (max = n / 5; max >= 0 && (n - max * 5) % 3 != 0; max--);
	if (max < 0) printf("-1");
	else cout << max + (n - 5 * max) / 3;
 }