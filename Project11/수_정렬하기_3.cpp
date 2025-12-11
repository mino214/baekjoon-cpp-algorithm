#include<iostream>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,index;
	int list[10001] = {};
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> index;     // 배열의 위치로 받아드림
		list[index] += 1; // 중복되는 경우가 있으므로 counting
	}
	for (int i = 1; i <= 10000; ++i) {
		for (int j = 1; j <= list[i]; ++j)//list[i]만큼 i의 값이 입력됨
			cout << i << "\n";
	}
	return 0;
}