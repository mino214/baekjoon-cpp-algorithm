#include<iostream>
using namespace std;
int main() {
	int n;
	int total = 0;
	cin >> n;
	for (int i = n; i > 1; --i)
		total += n;
	cout << total;
	return 0;
}