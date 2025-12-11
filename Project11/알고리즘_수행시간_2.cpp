#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    cout << n << "\n" << 1;
	return 0;
}
/*
크기 n이 주어지면 MenOfPassion 알고리즘 
수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        sum <- sum + A[i]; # 코드1
    return sum;
}
첫째 줄에 코드1 의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 
최고차항의 차수를 출력한다. 단, 다항식으로 나타낼 수 없거나
최고차항의 차수가 3보다 크면 4를 출력한다.
코드1 이 7회 수행되고 알고리즘의 수행 시간이 n에 비례한다

c) O(n) - linear time
- 입력값의 크기에 비례해서 처리시간이 증가하는 알고리즘
- 즉, 입력값이 커지면 처리시간도 증가한다. 
for( i = 0 ; i < n ; ++i)
   print(a);
*/