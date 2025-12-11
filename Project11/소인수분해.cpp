#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	int value = 2;
	vector<int> list;
	cin >> n;
	while (n > 0) {
		if (n == 1)
			break;
		if (n % value == 0) {
			list.push_back(value);
			n /= value;
		}
		else
			++value;
	}
	for (int i = 0; i < list.size(); ++i)
		cout << list[i] << endl;
	return 0;
}