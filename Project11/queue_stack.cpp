#include<iostream>
#include<deque>
using namespace std;
#define MAX_SIZE 100001
int main() {
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int n, m;
	bool que_sta[MAX_SIZE];
	long long int input;
	deque<long long int>queue_List;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> que_sta[i];
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (!que_sta[i])
			queue_List.push_back(input);
	} cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> input;
		queue_List.push_front(input);
		cout << queue_List.back() << " ";
		queue_List.pop_back();
	}
	return 0;
}
