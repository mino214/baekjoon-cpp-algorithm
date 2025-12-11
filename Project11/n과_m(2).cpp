#include<iostream>
#define MAX_SIZE 9
using namespace std;
bool visited[MAX_SIZE] = { false };
int list[MAX_SIZE];
int n, m;
void Sequnece_Print() {
	for (int i = 0; i < m; ++i)
		cout << list[i] << " ";
	cout<<"\n";
}
void Integer_Sequnece(int cnt, int start) {
	if (cnt == m) {
		Sequnece_Print();
		return;
	}
	for (int i = start; i <= n; ++i) {
		if (!visited[i]) {
			visited[i] = true;
			list[cnt] = i;
			Integer_Sequnece(cnt + 1,i);
			visited[i] = false;
		}
	}
}
int main() {
	cin >> n >> m;
	Integer_Sequnece(0,1);
	return 0;
}
/*
void Print_List() {
	for (int i = 0; i < m; ++i)
		cout << list[i] << " ";
	cout << "\n";
}
void dfs(int num, int cnt) {
	if (cnt == m) {
		Print_List();
		return;
	}
	for (int i = num; i <= n; ++i) {
		if (!visited[i]) {
			visited[i] = true;
			list[cnt] = i;
			dfs(i+1,cnt + 1);
			visited[i] = false;
		}
	}
}
int main() {
	cin >> n >> m;
	dfs(1,0);
	return 0;
}
*/