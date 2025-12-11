#include<iostream>
using namespace std;
int main() {
    unsigned long long int n;
    cin >> n;
    cout<<(n - 2) * (n - 1) * n / 6<< "\n" << 3;
	return 0;
}
/*
입력의 크기 n이 주어지면 MenOfPassion 알고리즘
수행 시간을 예제 출력과 같은 방식으로 출력해보자.
MenOfPassion 알고리즘은 다음과 같다.
MenOfPassion(A[], n) {
    sum <- 0;                                                 // 7 
    for i <- 1 to n - 2                                       5  (1 ~ 5)  -> -2
        for j <- i + 1 to n - 1                               4  (2 ~ 6)  -> -3
            for k <- j + 1 to n                               4  (3 ~ 7)  -> -3
                sum <- sum + A[i] × A[j] × A[k]; # 코드1    (5+ ...1) + (4+...1) + (3+...1) + (2+1) + 1
    return sum;                                                
}
-input-
첫째 줄에 입력의 크기 n(1 ≤ n ≤ 500,000)이 주어진다
-output-
첫째 줄에 코드1 의 수행 횟수를 출력한다.
둘째 줄에 코드1의 수행 횟수를 다항식으로 나타내었을 때, 최고차항의 차수를 출력한다.
단, 다항식으로 나타낼 수 없거나 최고차항의 차수가 3보다 크면 4를 출력한다.

시그마 공식 이용
 n-2  i      (n - 2)(n - 1)n
 Σ   Σ i = ----------------
 I=1,J=1           6
*/