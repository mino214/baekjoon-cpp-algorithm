#include<iostream>
using namespace std;
int main() {  // 라인의 max값이 (1 + 6 * n) 이다.
	int n;  int line = 1; int temp=1;
	cin >> n;
	while (true) {
		if (n <= temp)
			break;
		temp += 6 * line;
		++line;
	}
	cout << line;
}