#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	long int n;
	cin >> n;
	vector<int> list;
	for (int i = 0; i < n; ++i) {
		int input;
		cin >> input;
		list.push_back(input);
	} sort(list.begin(), list.end());
	// list.erase(unique(list.begin(), list.end()), list.end()); 중복제거
	for (int i = 0; i < list.size(); ++i)
		cout << list[i] << "\n";
	return 0;
}