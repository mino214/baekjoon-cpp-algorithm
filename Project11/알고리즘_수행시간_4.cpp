#include<iostream>
using namespace std;
int main() {
    unsigned long int n;
    cin >> n;
    cout << ((n - 1) * n )/ 2 << "\n" << 2;
	return 0;
}
/*
* 입력의 크기 n이 주어지면 MenOfPassion 알고리즘 
수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n - 1
        for j <- i + 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
-입력 - 
첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000)이 주어진다.
-출력-
첫째 줄에 코드1 의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수를 출력한다.
단, 다항식으로 나타낼 수 없거나 최고차항의 차수가 3보다 크면 4를 출력한다.

최대 n 은 500,000 이므로 최대 출력은 124,999,750,000 이 되어
int 범위를 넘음 (int 범위는 대략 21억에서 -21억)  

e) O(nm) - quadratic time
- 이중 for문과 동일하지만 서로 다른 횟수를 갖는다. 

n = input()
m = input()
for i in range(len(n)):
   for j in range(len(m)):
      print(data)
*/