#include<iostream>
#include<algorithm>
#define MAX_SIZE 9
using namespace std;
int  list[MAX_SIZE];
bool visited[MAX_SIZE] = { false };
int n, m;
void Print_List() {
	for (int i = 0; i < m; ++i)
		cout << list[i] << " ";
	cout << "\n";
}
void dfs(int cnt) {
	if (cnt == m) {
		Print_List();
		return;
	}
	for (int i = 1; i <= n; ++i) {
		if (!visited[i]) {
			visited[i] = true;
			list[cnt] = i;
			dfs(cnt + 1);
			visited[i] = false;
		}
	}
}
int main() {
	cin >> n >> m;
	dfs(0);
	return 0;
}