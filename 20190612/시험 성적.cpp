#include <iostream>

using namespace std;
int main() {
	int num;
	cin >> num;
	cout << (num >= 90 ? "A" : (num >= 80 ? "B" : (num >= 70 ? "C" : (num >= 60 ? "D" : "F"))));
}