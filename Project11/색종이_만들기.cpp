#include<iostream>//전체 종이의 크기가 N×N(N=2k, k는 1 이상 7 이하의 자연수)
#define MAX_SIZE 129 
using namespace std;
int n,white_cnt,blue_cnt;
int paper[MAX_SIZE][MAX_SIZE];
void Divide(int x,int y,int length) {
	int color = paper[y][x];
	bool sw = true;
	for (int i = y; i < length+y; ++i) {
		for (int j = x; j < length+x; ++j) {
			if (paper[i][j] != color) {
				sw = false;
				break;
			}
		}
	}
	if (!sw) {
		Divide(x, y, length / 2);                             // 2사분면
		Divide(x+length/2, y, length/2);                      // 1사분면
		Divide(x, y + length / 2, length / 2);                // 3사분면
		Divide(x + length / 2, y + length / 2, length / 2);   // 4사분면
	}
	else 
		((color == 0) ? ++white_cnt : ++blue_cnt);
}
int main() {
	int sum = 0;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> paper[i][j];
	}
	Divide(0,0,n);
    cout << white_cnt << "\n" <<blue_cnt;
	return 0;
}