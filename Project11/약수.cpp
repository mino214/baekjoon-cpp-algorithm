#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, input;
	vector<int> list;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> input;
		list.push_back(input);}
	sort(list.begin(), list.end());
	int max = *max_element(list.begin(), list.end());
	int min = *min_element(list.begin(), list.end());
	max *= min;
	cout << max;
	return 0;
}