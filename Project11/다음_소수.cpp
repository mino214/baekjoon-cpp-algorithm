#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
bool Decimal(long long int n) {
	if (n <= 1)
		return false;
	else if (n == 2 || n == 3)
		return true;
	for (long long int i = 2; i <= sqrt(n); ++i) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int main() {
	long long int n,input;
	vector<long long int> list;
	cin >> n;
	for (long long int i = 0; i < n; ++i) {
		cin >> input;
		list.push_back(input);
	}
	for (long long int i = 0; i < n; ++i) {
		long long int temp = list[i];
		while (true) {
			if (Decimal(temp))
				break;
			++temp;
		}cout << temp << "\n";
	}
	return 0;
}