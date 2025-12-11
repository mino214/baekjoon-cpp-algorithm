#include<iostream>
using namespace std;
int Divide(int a, int b) {
	if (a % b == 0)
		return b;
	return Divide(b, a % b);
}
int main() {
	int a, b;
	int min, max;
	cin >> a >> b;
	if (a < b)
		swap(a, b);
	min = Divide(a, b);
	max = a * b / Divide(a, b);
	cout << min << "\n" << max;
	return 0;
}