#include<iostream>
#define MAX_SIZE 398
using namespace std;
int n, len;
char star[MAX_SIZE][MAX_SIZE];
void Gap_to_Star(int x, int y, int len, int cnt) {
	if (cnt == n) {
		return;
	}
	for (int i = y; i < y + len; ++i) {
		if (i == y || i == y + len - 1) {
			for (int j = x; j < x + len; ++j)
				star[i][j] = '*';
		}
		else {
			star[i][x] = '*';
			star[i][x + len - 1] = '*';
		}
	}
	Gap_to_Star(x + 2, y + 2, len - 4, cnt + 1);
}
int main() {
	cin >> n;
	len = 4 * n - 3;
	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j)
			star[i][j] = ' ';
	}
	Gap_to_Star(0,0,len,0);
	for (int i = 0; i < len; ++i) {
		for (int j = 0; j < len; ++j)
			cout << star[i][j];
		cout << "\n";
	}
	return 0;
}