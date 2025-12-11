#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> xy;
int main() {
	int n;
	int x, y;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x >> y;
		xy.push_back({ y,x }); // input
	}
	sort(xy.begin(), xy.end()); // 정렬
	for (int i = 0; i < n; ++i)
		cout << xy[i].second << " " << xy[i].first << "\n";
	return 0;
}/*
 2차원 평면 위의 점 N개가 주어진다. 좌표를 y좌표가 증가하는 순으로,
 y좌표가 같으면 x좌표가 증가하는 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
 */