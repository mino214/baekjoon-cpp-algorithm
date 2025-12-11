#include<iostream>
#include<cmath>
#define MAX_SIZE 2188
using namespace std;
int paper[MAX_SIZE][MAX_SIZE];
int zero_cnt, m_one_cnt, one_cnt;
int n;
void Count_Plus(int num) {
	if (num == 1) ++one_cnt;
	else if (num == -1) ++m_one_cnt;
	else ++zero_cnt;
}
void Divide(int x, int y, int length) {
	bool sw = true;
	int num = paper[y][x];
	for (int i = y; i < y + length; ++i) {
		for (int j = x; j < x + length; ++j) {
			if (num != paper[i][j]) {
				sw = false;
				break;
			}
		}
	}
	if (!sw) { //1 3 9 27 .... 
		for (int i = 0; i < length; i += length / 3) {
			for (int j = 0; j < length; j += length / 3)
				Divide(x + j, y + i, length / 3);
		}
	}else Count_Plus(num);
}
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> paper[i][j];
	} Divide(0,0,n);
	cout << m_one_cnt << "\n" << 
		zero_cnt << "\n" << one_cnt;
	return 0;
}
// 아닌 경우에는 종이를 같은 크기의 종이 9개로 자르고,
// 각각의 잘린 종이에 대해서 (1)의 과정을 반복한다.