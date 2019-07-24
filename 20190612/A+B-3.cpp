#include <iostream>
using namespace std;
int main(){
	cin.sync_with_stdio(false);
	cin.tie(NULL);
	int n ,a,b,i=1;
	for (cin >> n; i<=n; i++) {
		cin >> a >> b;
		cout <<"Case #"<<i<<": "<< a<<" + "<<b << " = "<<a + b <<"\n" ;
	}
}