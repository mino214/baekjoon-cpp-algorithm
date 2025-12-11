#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int> max;
queue<int> list;
void Insert(int n) {
	for (int i = 1; i <=n; ++i)
		list.push(i);
}
void Delete_K(int k) {
	while (true) {
		if (list.empty())
			return;
		for (int i = 0; i < k-1; ++i) {
			int temp = list.front();
			list.pop();
			list.push(temp);
		}
		max.push_back(list.front());
		list.pop();
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	Insert(n);
	Delete_K(k);
	cout << "<";
	for (int i = 0; i < max.size() - 1; ++i)
		cout << max[i] << ", ";
	cout << max[max.size() - 1] << ">";
	return 0;
}
// <3, 6, 2, 7, 5, 1, 4>
