#include<iostream>
using namespace std;
long long int Factorial(long long int n) {
	if (n <= 1)
		return 1;
	return n * Factorial(n-1);
}
int main() {
	long long int n;
	cin >> n;
	cout << ((n != 0) ? Factorial(n) : 1);
	return 0;
}