#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int Decimal(int n) {
	int sw_count = 0;
	vector<bool> sw(n * 2 + 1,false);
	for (int i = 2; i <= sqrt(n * 2); ++i) {
		if (!sw[i]) {
			for (int j = i + i; j <= n * 2; j += i) 
				sw[j] = true;
		}
	}
	sw_count=count(sw.begin()+n+1, sw.end(), false);
	return sw_count;
}
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	vector<int> list;
	int input;
	while (true) {
		cin >> input;
		if (input == 0)
			break;
		list.push_back(input);
	}
	for (int i = 0; i < list.size(); ++i) {
		cout << Decimal(list[i]) <<"\n";
	}
	return 0;
}
/*bool sw;
for (int i = n + 1; i <= n * 2; ++i) {
	sw = false;
	for (int j = 2; j <= sqrt(i); ++j) {
		if (i % j == 0) {
			sw = true;
			break;
		}
	}
	if (!sw)
		++count;
}return count;
*/