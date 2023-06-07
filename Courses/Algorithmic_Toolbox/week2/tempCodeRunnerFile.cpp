#include <bits/stdc++.h>
using namespace std;

long long getFibonacciPartialSumFast(long long m, long long n) {
	long long sum = 0;

	m = m % 60;
	n = n % 60;

	if (n < m) n += 60;

	long long current = 0;
	long long next = 1;

	for (int i = 0; i <= n; i++) {
		if (i >= m) {
			sum += current;
		}

		long long newCurrent = next;
		next = next + current;
		current = newCurrent;
	}

	return sum % 10;
}

int main() {
	long long m ;std::cin>>m;
	long long n ;std::cin>>n;
	cout << getFibonacciPartialSumFast(m, n) << endl;
	return 0;
}
