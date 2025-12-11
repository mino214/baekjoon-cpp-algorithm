#include<iostream>
using namespace std;
int main()
{
	int grid[9][9];
	int max_value=0,max_i=0, max_j=0;
	for (int i = 0; i < 9; ++i){
		for (int j = 0; j < 9; ++j) {
			cin >> grid[i][j];
		}
	}
	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (grid[i][j] > max_value) {
				max_value = grid[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	cout << max_value << endl;
	cout << max_i + 1 << " " << max_j + 1;
	return 0;
}