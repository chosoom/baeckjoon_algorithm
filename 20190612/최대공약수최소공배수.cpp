#include <iostream>

using namespace std;

int main() {
	int u, v, gcm, lcm, m, n;

	cin >> u >> v;
	m = u;
	n = v;

	while (m!=n) {
		m > n ? m = m - n : n = n - m;
	}
	gcm = m;
	lcm = (u * v) / gcm;
	cout << "최대공약수: " << gcm << endl;
	cout << "최소공배수: " << lcm << endl;

}