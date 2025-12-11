#include<iostream>
using namespace std;
int main() {
	int n;
	long long int total = 1;
	cin >> n;
	if (n > 0) {
		for (int i = 1; i <= n; ++i)
			total *= i;
	}
	cout << total;
	return 0;
}