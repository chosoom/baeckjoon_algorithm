#include <iostream>

using namespace std;
void main() {
	int jumsu[8] = { 79,65,10,88,98,100,56,82};

	int count = 0;
	int i = 0;

	do {
		if (jumsu[i] >= 80) {
			count++;
		}
		i++;
	} while (i < size(jumsu));

	cout << size(jumsu) << endl << sizeof(jumsu)<<endl;
	cout << count << endl;
}