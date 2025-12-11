#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<tuple>
using namespace std;
vector<tuple<int, string, int>> member;
bool Compare(tuple<int, string, int>&a, tuple<int, string, int>& b) {
	if (get<0>(a) == get<0>(b)) 
		return get<2>(a) < get<2>(b);
	return get<0>(a) < get<0>(b);
}
int main() {
	int n;
	int age;
	string name;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> age >> name;
		member.push_back({ age,name,i+1});
	}
	sort(member.begin(), member.end(),Compare);
	for (int i = 0; i < n; ++i)
		cout << get<0>(member[i]) << " " << get<1>(member[i]) << "\n";
	return 0;
}
/*
 첫째 줄에 온라인 저지 회원의 수 N이 주어진다. (1 ≤ N ≤ 100,000)
둘째 줄부터 N개의 줄에는 각 회원의 나이와 이름이 공백으로 구분되어 주어진다. 
나이는 1보다 크거나 같으며, 200보다 작거나 같은 정수이고, 
이름은 알파벳 대소문자로 이루어져 있고, 
길이가 100보다 작거나 같은 문자열이다. 입력은 가입한 순서로 주어진다.

첫째 줄부터 총 N개의 줄에 걸쳐 온라인 저지 회원을 나이 순, 
나이가 같으면 가입한 순으로 한 줄에 한 명씩 나이와 이름을 공백으로 구분해 출력한다.
*/