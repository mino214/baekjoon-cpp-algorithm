#include<iostream>
#define MAX_SIZE 41
using namespace std;
int f[MAX_SIZE];
int cnt_1,cnt_2;
int fib(int n) {
	if (n == 1 || n == 2) return 1;
	else {
		++cnt_1;
		return (fib(n - 1) + fib(n - 2)); }
}
int fibonacci(int n) {
	if (n <= 1) {
		f[n] = n;
		return f[n];
	}
	if (f[n] != 0) {
		return f[n];
	}
	++cnt_2;
	f[n] = fibonacci(n - 1) + fibonacci(n - 2);
	return f[n];
}
int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << cnt_1 + 1 << " " << cnt_2 - 1;
	return 0;
}