#include <iostream>

using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	int a,b,num,i=0;
	cin >> num;
	for (; i < num; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}