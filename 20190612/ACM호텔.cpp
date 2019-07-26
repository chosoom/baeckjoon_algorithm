#include <iostream>
using namespace std;
void room(int h,int w,int n) {
	if (n%h == 0)
		cout << h * 100 + n / h << endl;
	else
		cout << (n%h) * 100 + n / h + 1<<endl;
}
int main() {
	int num,h,w,n;
	for (cin >> num; num > 0; num--) {
		cin >> h >> w >> n;
		room(h, w, n);
	}
}