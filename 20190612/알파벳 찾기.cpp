#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	int a[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}, i = 0;
	for (std::cin >> s; s[i] != NULL; i++) if(a[s.at(i)-'a'] == -1) a[s.at(i) - 'a'] = i;
	for (i = 0; i < 26; i++) std::cout << a[i] << " ";
}