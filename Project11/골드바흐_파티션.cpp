#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int Decimal(int n) {
	vector<bool>sw(n+1,false);
	int count = 0;
	for (int i = 2; i <= sqrt(n); ++i) {
		if (!sw[i]) {
			for (int j = i + i; j <= n; j += i)
				sw[j] = true;
		}
	}
	for (int i = 2; i <= n/2; ++i) {
		int a = i;
		int b = n - i;
		if (!sw[a] && !sw[b])
			++count;
	}
	return count;
}
int main() {
	int n,input;
	vector<int> list;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> input;
		list.push_back(input);}
	for (int i = 0; i < n; ++i) 
		cout<<Decimal(list[i])<<"\n";
	return 0;
}
/*
* 
그리고 a = i, b = n - i가 그냥 보면 이해가 안될수도 있는데 간단하다.
a와 b의 합이 n이 되야하므로 저렇게 된다.
그것을 이용해 a는 처음부터 수가 증가하고, b는 n부터 수가 감소할 것이다.
그리고 소수 배열에서 a번째 element가, 즉 a가 소수이고 b번째 element, 즉 b가 소수라면 출력해주면된다.
*/