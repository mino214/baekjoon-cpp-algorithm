#include<iostream>
using namespace std;
int main() {
    long int n;
    cin >> n;
    cout << n * n << "\n" << 2;
	return 0;
}
/*
* 입력의 크기 n이 주어지면 MenOfPassion 알고리즘 
수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.

MenOfPassion(A[], n) {
    sum <- 0;
    for i <- 1 to n
        for j <- 1 to n
            sum <- sum + A[i] × A[j]; # 코드1
    return sum;
}
첫째 줄에 코드1 의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수를 출력한다. 
단, 다항식으로 나타낼 수 없거나 최고차항의 차수가 3보다 크면 4를 출력한다.

(첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000)이 주어진다.)

d) O(n의 2제곱) - quadratic time
- 동일한 반복회수를 갖는 이중 for문이 경우에 해당된다. 
- for문 하나당 O(n)의 시간복잡도를 갖는다.
- 이중 for문의 경우 O(n) * O(n) 만큼의 시간복잡도를 갖게 되니까, O(n^2)가 된다. 
for(int i=0 ; i<n ; ++i)
   for(int j=0 ; j<n ; ++j)
      print(i*j)

*/