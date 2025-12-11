#include<iostream>
using namespace std;
int divide(int a, int b) {
	if (a % b == 0)
		return b;
	return divide(b, a % b);
}
int main() {
	int ab[2][2];
	int a, b,divi;
	for (int i = 0; i < 2; ++i)
		cin >> ab[i][0] >> ab[i][1];
	b = ab[0][1] * ab[1][1];
	a = (ab[0][1] * ab[1][0]) + (ab[0][0] * ab[1][1]);
	if (a > b)
		divi = divide(a, b);
	else
		divi = divide(b, a);
	while (divi > 1) {
		a /= divi;
		b /= divi;
		if (a > b)
			divi = divide(a, b);
		else
			divi = divide(b, a);
	}
	cout << a <<" "<< b;
	return 0;
}