#include <iostream>
#include <vector>

long long sum(std::vector<int> &a) {
	long long sum = 0;
	std::vector<int>::iterator itr;
	for (itr = a.begin(); itr != a.end(); itr++) sum += *itr;
	return sum;
}