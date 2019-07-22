#include <iostream>
int arr[10000] = { 0, };
void d(int a) {
	arr[a-1] = 1;
	int result = a,sum=result;
	while (result != 0) {
		if (result / 10 == 0) { sum += result; break; }
		sum += result%10;
		result /= 10;
	}
	if (sum > 10000) return;
	d(sum);
}
int main() {
	for (int i = 0; i < 10000; i++) {
		if (arr[i] == 0) { d(i + 1); arr[i] = 0; }
	}
	for (int i = 0; i < 10000; i++) {
		if (arr[i] == 0) std::cout << i+1 << "\n";
	}
}