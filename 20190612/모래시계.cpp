#include <iostream>

using namespace std;
int main() {

	int arr[5][5] = { {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0} };

	int cnt = 1;
	int sw = 0;
	for (int i = 0; i < 5; i++) {
		for (int j = sw; j < 5-sw; j++) {
			arr[i][j] = cnt;
			cnt++;
		}
		if (i > 5 / 3) {
			sw--;
		}
		else {
			sw++;
		}
		
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}