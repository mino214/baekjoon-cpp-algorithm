#include<iostream>
using namespace std;
int main() {
	int n, k;
	int x[1000];
	cin >> n >> k;
	for (int i = 0; i < n; ++i)
		cin >> x[i];
	for (int i = 0; i < n; ++i) {
		for (int j = n - 1; j > i; --j) {
			if (x[j] > x[j - 1]) {
				int temp = x[j-1];
				x[j - 1] = x[j];
				x[j] = temp;
			}
		}
	}
	cout << x[k - 1];
	return 0;
}