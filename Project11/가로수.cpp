#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int Gcd(int a, int b) {// 위 소스코드처럼 for문을 이용해주면 N개도 동일한 방법으로 최대공약수를 구할 수 있다.)
	if (a < b)
		swap(a, b);
	return (a % b == 0 ? b : Gcd(b, a % b));
}
int main() {
	vector<int>list;
	vector<int>list_between;
	int n, input;
	int min_count = 0,gcd;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> input;
		list.push_back(input);}
	sort(list.begin(), list.end());
	for (int i = list.size() - 1; i > 0; --i)
		list_between.push_back(list[i] - list[i - 1]);
	reverse(list_between.begin(), list_between.end());
	gcd = list_between[0];
	for (int i = 0; i < list_between.size(); ++i)
		gcd = Gcd(gcd, list_between[i]);
	for (int i = 0; i < list_between.size(); ++i)
		min_count += (list_between[i] / gcd) - 1; // 양끝에 이미 심어져 있으므로 -1
	cout << min_count;
}