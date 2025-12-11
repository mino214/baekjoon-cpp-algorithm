#include<iostream>
using namespace std;
int Factorial(int a) {
	int t = 1;
	for (int i = 2; i <= a; ++i)
		t *= i;
	return t;
}
int main() {
	int n, k;
	cin >> n >> k;
	cout << Factorial(n) / (Factorial((n - k)) * Factorial(k));
	return 0;
}
// 주어진 크기의 집합에서 원하는 개수만큼 순서없이 뽑는 조합의 가짓수
// 2를 상징하는 이항이라는 말이 붙은 이유는 뽑거나 안뽑거나 두가지의 선택만 존재
/*

k                n!
-  = nck = --------------- ( 0 <= k <= n) ....1
n          (n - k) ! k!

*/