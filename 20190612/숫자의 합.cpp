#include<iostream>
int main() {
	int a,i=0,sum=0;
	std::cin >> a;
	char *c = new char[a];
	for (std::cin >> c; c[i] != NULL; i++) { sum += c[i]-'0'; }
	std::cout << sum;
}