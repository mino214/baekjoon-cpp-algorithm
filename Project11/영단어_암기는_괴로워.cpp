#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
bool Sorting(const pair<string, int> &a , const pair<string, int> &b){
	if (a.second == b.second) {                  // 단어 출현 횟수가 같을 때
		if (a.first.length() > b.first.length()) // 문자열의 길이 비교
			return a.first.length() > b.first.length();
		if (a.first.length() < b.first.length())
			return a.first.length() > b.first.length();
		return a.first < b.first;                // 사전순
	}
	else
		return a.second > b.second;
}
int main() {
	map<string, int, greater<string>> list; // 기본 내림차순 정렬
	int n, m;
	string input;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input.length() >= m) {
			if (list.empty() || list.count(input) == 0)
				list.insert({ input,1 });
			else 
				++list[input];
		}
	}
	vector<pair<string, int>> vec_list(list.begin(), list.end());
	sort(vec_list.begin(), vec_list.end(), Sorting);
	for (auto iter = vec_list.begin(); iter != vec_list.end(); ++iter)
		cout << iter->first <<"\n";
	return 0;
}
/*
1. 자주 나오는 단어일수록 앞에 배치한다.
2. 해당 단어의 길이가 길수록 앞에 배치한다.
3. 알파벳 사전 순으로 앞에 있는 단어일수록 앞에 배치한다
n, m input, read only words that are longer than 'm' long. 
*/