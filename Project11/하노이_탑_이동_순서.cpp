#include<iostream>
#include<cmath>
using namespace std;
void Move_Disk(int n, int one, int two, int three) { // 출발, 경유, 목적지
	if (n == 1)
		cout << one << " " << three<<"\n";
	else {
		Move_Disk(n - 1, one, three, two);   // one,  n-1 disk to two
		cout << one << " " << three << "\n"; // 1 -> 3으로 가는 과정 출력
		Move_Disk(n - 1, two, one, three);   // two, n-1의 disk to three 
	}
}
int main() {
	int n, k; 
	cin >> n;
	k = (int)pow(2, n) - 1;
	cout << k << "\n";
	Move_Disk(n, 1, 2, 3);
	return 0;
}