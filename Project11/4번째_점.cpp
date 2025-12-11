#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() { // 3개의 점의 좌표가 주어지고 정사각형을 만들기 위한 마지막 좌표를 출력
	int a[3], b[3];// 5 5,  5 7,  7 5 -> 7 7
	for (int i = 0; i < 3; ++i) // 30 20, 10 10, 10 20 -> 30 10
		cin >> a[i] >> b[i];
	if (a[0] == a[1])
		cout << a[2] << " ";
	else if (a[0] == a[2])
		cout << a[1] << " ";
	else
		cout << a[0] << " ";
	if (b[0] == b[1])
		cout << b[2] << " ";
	else if (b[0] == b[2])
		cout << b[1] << " ";
	else
		cout << b[0] << " ";
}