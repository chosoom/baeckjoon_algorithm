#include <iostream>
using namespace std;
void print(int a) {
	int b[8] = {0,};
	int c = a;
	for (int i = 0; c/3!=0; i++) {
		b[i] = c;
		c /= 3;
	}

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			int k=0;
			while (b[k] != 0) {
				if (j % 3 >= b[k] / 3 && j%3 <b[k]/3+b[k]/3)
					cout << " ";
				k++;
			}		
			cout << "*";
			j += k-1;
		}
		cout << "\n";
	}
}
/*int main() {
	int num;
	cin >> num;
	print(num);
}*/