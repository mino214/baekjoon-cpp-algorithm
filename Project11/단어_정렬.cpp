#include<iostream>
#include<vector>
#include<algorithm>
//#include<utility> 
#include<string>
using namespace std;
bool Compare(string a, string b) {
	if (a.size() == b.size())// 길이가 같으면 알파벳 순서
		return a < b;
	return a.size() < b.size(); //길이가 다르면 문자열 길이
}
int main() {
	int n;
	cin >> n;
	string input;
	vector<string>list;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		list.push_back(input);
	}
	sort(list.begin(), list.end(),Compare); // 정렬
	list.erase(unique(list.begin(), list.end()), list.end()); // 중복제거
	for (int i = 0; i < list.size(); ++i) // 출력
		cout << list[i] << "\n";
	return 0;
}
/*
알파벳 소문자로 이루어진 N개의 단어가 들어오면 
아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.

첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 
둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 
한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.
*/