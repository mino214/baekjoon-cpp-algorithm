#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; ++i) {
		bool sw = false;
		for (int j = 2; j <= sqrt(i); ++j) {
			if (i % j == 0) {
				sw=true;
				break;}
		}
		if (!sw && i>=2)
			cout << i << "\n";
	}
	return 0;
}