#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n,x;
	int min;
	vector<int> x_list;
	vector<int> x_list_original;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		x_list.push_back(x);
	}
	x_list_original = x_list;
	sort(x_list.begin(), x_list.end());
	x_list.erase(unique(x_list.begin(), x_list.end()), x_list.end());
	for (int i = 0; i < n; ++i) {
		cout << lower_bound(x_list.begin(), x_list.end(),  
			x_list_original[i]) - x_list.begin() << " ";
	}
	return 0;
}
/*
수직선 위에 N개의 좌표 X1, X2, ..., XN이 있다. 
이 좌표에 좌표 압축을 적용하려고 한다.
Xi를 좌표 압축한 결과 X'i의 값은 Xi > Xj를 만족하는 
서로 다른 좌표 Xj의 개수와 같아야 한다.
X1, X2, ..., XN에 좌표 압축을 적용한 결과 X'1, X'2, ..., X'N를 출력해보자.

첫째 줄에 N이 주어진다.
둘째 줄에는 공백 한 칸으로 구분된 X1, X2, ..., XN이 주어진다.

첫째 줄에 X'1, X'2, ..., X'N을 공백 한 칸으로 구분해서 출력한다.

1 ≤ N ≤ 1,000,000
-10(9제곱) ≤ Xi ≤ 10(9제곱)
-------------------------------------
lower_bound
용도 : 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
사용 조건 : 탐색을 진행할 배열 혹은 벡터는 오름차순 정렬되어 있어야 함
 lower_bound 값에서 배열 첫 번째 주소를 가리키는 배열의 이름을 빼 주면 됩니다
 벡터의 경우 아래와 같이 v.begin()을 빼 주면 됩니다.

 upper_bound
용도 : 찾으려는 key 값을 초과하는 숫자가 배열 몇 번째에서 처음 등장하는지 찾기 위함
⭐ 사용 조건 : 탐색을 진행할 배열 혹은 벡터는 오름차순 정렬되어 있어야 함

 오름차순 정렬된 자료에서 특정한 숫자가 몇 번 나오는지 탐색하고자 할 때

이진 탐색 기반의 lower, upper_bound를 사용하여 O(logN)으로 탐색 가능합니다. 
O(N)이 불가능 할 때 유용하게 사용할 수 있습니다.
*/