#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	long int n;
	cin >> n;
	vector<int> list;
	while (n != 0) {
		list.push_back(n % 10);
		n /= 10;
	}
	sort(list.begin(), list.end());
	reverse(list.begin(), list.end());//뒤집는다
	for (int i = 0; i < list.size(); ++i)
		cout << list[i];
	return 0;
}
