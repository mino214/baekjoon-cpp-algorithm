#include<iostream>
#include<vector>
#include<algorithm>
#define MAX_SIZE 1025
using namespace std;
int n;
int arr[MAX_SIZE][MAX_SIZE];
int Divide(int start_x, int end_x, int start_y, int end_y) {
	if (start_x + 1 == end_x)
		return arr[start_y][start_x];
	vector<int> t;
	int md_x = (start_x + end_x) / 2, md_y = (start_y + end_y) / 2;
	int a = Divide(start_x,md_x,start_y, md_y);  // 2 분면
	int b = Divide(md_x,end_x, start_y, md_y);   // 1 분면	
	int c = Divide(start_x,md_x,md_y, end_y);    // 3 분면
	int d = Divide(md_x, end_x, md_y, end_y);    // 4 분면
	t.push_back(a); t.push_back(b); t.push_back(c); t.push_back(d);
	sort(t.begin(), t.end());
	return t[1];
}
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> arr[i][j];
	}
	cout << Divide(0, n, 0, n);
	return 0;
}