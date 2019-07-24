#include	<iostream>

using namespace std;
int main() {
	int h, m;
	cin >> h >> m;
	if (m < 45) {
		m = 15+m;
		if (h < 1) h = 23;
		else h = h - 1;
	}
	else { m = m - 45; }
	cout << h << " " << m;
}