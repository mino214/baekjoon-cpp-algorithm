#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int n;
	cin >> n;
	cout << (int)sqrt(n);
}
/*
* N번 째 창문이 열려 있으려면, 열고 닫은 횟수가 홀수번이어야 한다.
따라서 N의 약수의 개수가 홀수개여야 하고,
이런 특성을 만족하는 것은 제곱수다.
약수는 두 수가 짝을 이루어 곱해지므로 자연수의 약수의 개수는 짝수지만,
제곱수는 자기 자신을 곱하는 수가 추가되므로 홀수가 된다.
　따라서 주어진 범위 내의 제곱수의 개수를 구하면 문제를 해결할 수 있다
*/