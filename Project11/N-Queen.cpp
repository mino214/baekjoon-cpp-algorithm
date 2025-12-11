#include<iostream>
#include<vector>
#include<algorithm>
using namespace std; // 퀸 특성상 각 행마다 하나만 존재 가능
int cnt;
typedef struct Chess {
	int n;
	vector<int> chess_board;
}*P_Chess;
void Input_Data(P_Chess p) {
	cnt = 0;
	cin >> p->n;
	p->chess_board.resize(p->n,1);
}
void DFS(vector<int> board, bool sw, int n) {
	if (sw) {
		++cnt;
		return; }

}
void Set_Data(P_Chess p) {
	DFS(p->chess_board, false, p->n);
}
int main() {
	Chess cs;
	Input_Data(&cs);
	Set_Data(&cs);
	cout << cnt;
	return 0;
}