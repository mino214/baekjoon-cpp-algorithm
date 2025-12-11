#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n, m;
	long long input;
	vector<long long> card_n, card_m;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		card_n.push_back(input);}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> input;
		card_m.push_back(input);}
	sort(card_n.begin(), card_n.end());
	for (int i = 0; i < m; ++i) 
		cout << binary_search(card_n.begin(), card_n.end(), card_m[i])<<" ";//이진탐색
	return 0;
}
/*
첫째 줄에 상근이가 가지고 있는 숫자 카드의 개수 N(1 ≤ N ≤ 500,000)이 주어진다.
둘째 줄에는 숫자 카드에 적혀있는 정수가 주어진다.
숫자 카드에 적혀있는 수는 -10,000,000보다 크거나 같고, 
10,000,000보다 작거나 같다. 두 숫자 카드에 같은 수가 적혀있는 경우는 없다.

첫째 줄에 입력으로 주어진 M개의 수에 대해서,
각 수가 적힌 숫자 카드를 상근이가 가지고 있으면 1을,
아니면 0을 공백으로 구분해 출력한다.

-----------------------------------------------------------------------
	for (int i = 0; i < m; ++i) {   // 시간초과
		if (find(card_n.begin(), card_n.end(), card_m[i]) == card_n.end())
			cout << 0 << " ";
		else
			cout << 1 << " ";
	}
------------------------------------------------------------------------
     for (int i = 0; i < m; ++i) {  // 97% error, no answer
		int a = lower_bound(card_n.begin(), card_n.end(),
			card_m[i]) - card_n.begin();
		if (card_m[i] == card_n[a])
			cout << 1 << " ";
		else
			cout << 0 << " ";
	}
*/