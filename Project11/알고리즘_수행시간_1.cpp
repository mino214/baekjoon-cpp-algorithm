#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << 1 << "\n" << 0;
	return 0;
}
/*
입력의 크기 n이 주어지면 MenOfPassion 알고리즘 
수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
	i = [n / 2];
	return A[i]; # 코드1
}
첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000)이 주어진다.
○ n은 어떤 입력값을 넣어도 코드는 1회 수행, 수행시간은 상수이다
따라서 시간 복잡도는 O(1)
output -> 1 and 0
  
- 입력값의 크기에 상관없이 항상 같은 시간이 걸리는 알고리즘
  O(1) - constant time
*/