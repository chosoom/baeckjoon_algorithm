#include <iostream>

using namespace std;
int main() {
	cin.sync_with_stdio(false);
	cin.tie(NULL);

	int a, num;
	cin >> num >> a;

	int *arr = new int[num];
	for (int i = 0; i < num; cin >> arr[i++]);
	for (int i = 0; i < num; i++) { if (arr[i] < a) { cout << arr[i]; if (i == num - 1) break; cout << " "; } }
}