#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<pair<int, int>> birdge;
long long int Factorial(int a, int b){
	long long int ta = 1;
	long long int tb = 1;	
	if (a > b - a)
		a = b - a;
	for (int i = 1; i <= a; ++i) {
		tb *= (b - i) + 1;
		ta *= i;
	}
	return tb/ta;
}
int main() {
	int t, n, m;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n >> m;
		birdge.push_back({ n,m });
	}
	for (int i = 0; i < t; ++i)
		cout << Factorial(birdge[i].first, birdge[i].second) << "\n";
	return 0;
}
// 0 < n <= m > 30 
//이항정리 <- combination ( 조합 ) 으로 접근
// ｎCｒ
// 5C3 = 5x4x3 / 3x2x1