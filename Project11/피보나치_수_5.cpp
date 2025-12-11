#include<iostream>
using namespace std;
int Fibonacci(int n) {
	if (n <= 1)
		return n;
	return Fibonacci(n - 1) + Fibonacci(n - 2);
}
int main() {
	int n;
	int a = 0, b = 1;
	cin >> n;
	cout << Fibonacci(n);
}
// a b a b a b a b
// 0 1 1 2 3 5 8 13 .....	