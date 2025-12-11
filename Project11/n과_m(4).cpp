#include<iostream>
#define MAX_SIZE 9
using namespace std;
int  n, m;
int  seq[MAX_SIZE];
void Sequence_Print() {
	for (int i = 0; i < m; ++i)
		cout << seq[i] << " ";
	cout << "\n";
}
void DFS(int cnt, int start) {
	if (cnt == m) {
		Sequence_Print();
		return;
	}
	for (int i = start; i <= n; ++i) {
		seq[cnt] = i;
		DFS(cnt + 1, i);
	}
}
int main() {
	cin >> n >> m;
	DFS(0, 1);
	return 0;
}