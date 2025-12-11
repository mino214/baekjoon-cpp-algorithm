#include<iostream>
using namespace std;
long long int divide(long long int a, long long int b) {
	if (a % b == 0)
		return b;
	return divide(b, a % b);
}
int main() {
	long long int a, b;
	cin >> a >> b;
	if (a > b)
		cout << a * b / divide(a, b);
	else
		cout << a * b / divide(b, a);
	return 0;
}