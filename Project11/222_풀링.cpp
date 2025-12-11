#include<iostream>
#include<vector>
#include<algorithm>
#define MAX_SIZE 1025
using namespace std;
int number[MAX_SIZE][MAX_SIZE];
int Choose_Max_Two(int x, int y){
	vector<int> temp;
	for (int i = y; i < y + 2; ++i) {
		for (int j = x; j < x + 2; ++j)
			temp.push_back(number[i][j]);
	}
	sort(temp.begin(), temp.end());
	return temp[2];
}
void Divide(int n) {
	if (n <= 1) return;
	for (int i = 0; i < n; i+=2) {
		for (int j = 0; j < n; j += 2)
			number[i / 2][j / 2] = Choose_Max_Two(j, i);
	} Divide(n / 2);
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			cin >> number[i][j];
	} Divide(n);
	cout << number[0][0];
	return 0;
}