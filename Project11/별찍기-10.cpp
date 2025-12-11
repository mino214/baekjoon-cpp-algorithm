#include<iostream>         
using namespace std;              
void Print_Star(int x, int y, int n) {    
	if ((x / n) % 3 == 1 && (y / n) % 3 == 1)
		cout << " ";
	else {
		if (n / 3 == 0)
			cout << "*";
		else
			Print_Star(x, y, n / 3);
	}
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			Print_Star(j, i, n);
		cout << "\n";
	}
	return 0;
}
// 크기 3의 패턴은 가운데에 공백이 있고, 가운데를 제외한 모든 칸에 별이 하나씩 있는 패턴이다.
//N이 3의 거듭제곱(3, 9, 27, ...)이라고 할 때, 크기 N의 패턴은 N×N 정사각형 모양이다.
// N이 3보다 클 경우, 크기 N의 패턴은 공백으로 채워진 
// 가운데의 (N/3)×(N/3) 정사각형을 크기 N/3의 패턴으로 둘러싼 형태이다