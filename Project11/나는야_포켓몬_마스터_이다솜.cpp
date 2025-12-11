#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
map <string, int>pokemon_booklet;
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, m;
	vector<string> list;
	vector<string> names;
	string input;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		names.push_back(input);
		pokemon_booklet.insert({ input, i + 1 });}
	for (int i = 0; i < m; ++i) {
		cin >> input;
		list.push_back(input);}
	for (int i = 0; i < m; ++i) {
		if (isdigit(list[i][0]) == 0) {//번호 출력
			auto index = pokemon_booklet.find(list[i]);
			cout << index->second <<"\n";
		}
		else {
			int index = stoi(list[i]);//이름 출력
			cout << names[index-1]<< "\n";
		}
	}
	return 0;
}
/*  시간 초과
vector<pair<string, int>>pokemon_booklet ;
vector<pair<string, int>>m_problem;
void output(int i) {
	if (m_problem[i].second == 0){ // 숫자가 아님 --> 도감 번호 출력
		string name = m_problem[i].first;
		auto it = find_if(pokemon_booklet.begin(), pokemon_booklet.end(),
			[&name](const pair<string, int>& elem) { return elem.first == name; });
		cout << it[0].second<<"\n";
	}
	else// 문자열이 아님 -> 이름 출력
		cout<<pokemon_booklet[stoi(m_problem[i].first)-1].first<<"\n";
}
int main() {
	int n, m;
	string input;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		pokemon_booklet.push_back({ input, (i + 1) });}
	for (int i = 0; i < m; ++i) {
		cin >> input;
		m_problem.push_back({input,isdigit(input[0])});}
	for (int i = 0; i < m; ++i)
		output(i);
	return 0;
}
*/