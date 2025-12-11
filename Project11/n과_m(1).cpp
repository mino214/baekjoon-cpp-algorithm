#include<iostream>
#include<algorithm>
#define MAX_SIZE 9
using namespace std;// 1부터 N까지 자연수 중에서 중복 없이 M개를 고른 수열
int  list[MAX_SIZE];
bool visited[MAX_SIZE] = {false};
int n, m;
void Print_List() {
	for (int i = 0; i < m; ++i)
		cout << list[i] << " ";
	cout << "\n";
}
void dfs(int cnt){
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
/*
dfs : 깊이 우선 탐색
- 그래프 전체를 탐색하는 방법 중 하나. (완벽히 탐색)
- 시작점부터 다음 branch로 넘어가기 전에 해당 branch를 
  완벽하게 탐색하고 넘어가는 방법.
- 노드 방문 시 방문(visited) 여부를 반드시 검사해야 한다.
  아니면 무한 루프에 빠질 수 있음.
- stack 또는 recursive(재귀 함수)로 구현
- 시간 복잡도(Time complexity) : 인접 리스트로 구현 시 O(V+E) 
  인접 행렬로 구현 시 O(V^2)
- 얻은 결과가 최단 경로라는 보장이 없다. 
 (반면, BFS는 얻은 결과가 최단 경로이다.)
*/ 