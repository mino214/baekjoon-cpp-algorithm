#include<iostream>
#define MAX_SIZE 8
using namespace std;
int  spc[MAX_SIZE];
int n, m;
void Print_Sequence() {
	for (int i = 0; i < m; ++i)
		cout << spc[i] << " ";
	cout << "\n";
}
void Integer_Sequence(int cnt) {
	if (cnt == m){
		Print_Sequence();
		return;  }
	for (int i = 1; i <= n; ++i) {
		spc[cnt] = i;
		Integer_Sequence(cnt + 1);
	}
}
int main() {
	cin >> n >> m;
	Integer_Sequence(0);
	return 0;
}