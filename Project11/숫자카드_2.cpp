#include<iostream>
#include<algorithm>
#include<map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m, input;
	map<int, int> cards;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		++cards[input];
	}
	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> input;
		cout << cards[input] << " ";
	}cout << endl;
	return 0;
}

/*
* 
* 시간 복잡도
전체 원소 개수에 로그에 비례한다. 즉 
(log(last−first))O(log(last−first)) 이다.
#include <algorithm>
#include <iostream>
#include <map>
using namespace std;
맵을 이용한 풀이
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int N, M, x;
	cin >> N;
	int arr[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;
		cout << upper_bound(arr, arr + N, x) - lower_bound(arr, arr + N, x) << " ";
	}
}

lower_bound
범위 [first, last) 안의 원소들 중, value 보다 작지 않은 (크거나 같은)
첫 번째 원소를 리턴한다. 만일 그런 원소가 없다면 last 를 리턴한다.
이름 그대로 어떠한 값의 하한선 을 의미한다.

upper_bound
범위 [first, last) 안의 원소들 중, value 보다 큰 첫 번째 원소를 리턴한다. 
만일 그런 원소가 없다면 last 를 리턴한다. 
이름 그대로 어떠한 값의 상한선 을 의미한다.
*/
