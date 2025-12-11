#include<iostream>
using namespace std;
int  table[2][3];	
int  n, m, c; 
void DFS(int cnt, int sum, int pre_j) { // 전날과 장소가 같을 시 (value / 2)
	if (cnt == n) {
		if (sum >= m)
			++c;
		return;
	}
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j) {
			int temp = ((pre_j == j) ? table[i][j] / 2 : table[i][j]);
			DFS(cnt + 1, sum + temp, j);
		}
	}
}
int main() {
	c = 0;
	cin >> n >> m;
	for (int i = 0; i < 2; ++i) {
		for (int j = 0; j < 3; ++j)
			cin >> table[i][j];
	}
	DFS(0,0,-1);
	cout << c;
	return 0;
}