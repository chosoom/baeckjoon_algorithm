#include <iostream>

using namespace std;
int main() {

	int num;
	cin >> num;

	int i = 1;
	while (i <= 9) {
		cout << num << " * " << i << " = " <<num*i<< endl;
		i++;
	}
}