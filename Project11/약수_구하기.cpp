#include<iostream>
using namespace std;
int main() {
	int n, k,m=1;
	bool sw = true;
	cin >> n >> k;
	for (int i = 1; i <= n ; ++i) {
		if (n % i == 0) {	
			if (k == m) {
				cout << i;
				sw = false;
				break;
			}
			++m;
		}
	}
	if (sw)
		cout << '0';
}