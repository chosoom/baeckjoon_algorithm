#include <iostream>
using namespace std;
int main() {
	/*int a,b;
	while (true){
		cin >> a >> b;
		if(a != 0 && b != 0)
			cout << a + b << "\n";
		else break;
	}*/
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	int a, b;
	while (true) {
		cin >> a >> b;
		cout << a + b << "\n";
	}
}