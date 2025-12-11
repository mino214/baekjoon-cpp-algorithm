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
		xy.push_back({ x,y }); // input
	}
	sort(xy.begin(), xy.end()); // 정렬
	for (int i = 0; i < n; ++i)
		cout << xy[i].first << " " << xy[i].second << "\n";
	return 0;
}/*    first -> 첫번째 인자 반환 second -> 두번째 인자 반환 pair -> 두객체를 하나로 묶어 줌
 2차원 평면 위의 점 N개가 주어진다. 좌표를 x좌표가 증가하는 순으로, 
 x좌표가 같으면 y좌표가 증가하는 
 순서로 정렬한 다음 출력하는 프로그램을 작성하시오.
 -input-
 첫째 줄에 점의 개수 N (1 ≤ N ≤ 100,000)이 주어진다. 둘째 줄부터 N개의 줄에는 i번점의 위치 xi와 yi가 주어진다. 
 (-100,000 ≤ xi, yi ≤ 100,000) 좌표는 항상 정수이고, 위치가 같은 두 점은 없다.
 */