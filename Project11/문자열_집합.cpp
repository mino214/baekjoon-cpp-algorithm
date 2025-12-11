#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main() {
	int n, m, output = 0;
	string input;
	vector<string>S, words;
	cin >> n >> m;
	for (int i = 0; i < n; ++i){
		cin >> input;
		S.push_back(input);}
	for (int i = 0; i < m; ++i){
		cin >> input;
		words.push_back(input);}
	sort(S.begin(), S.end());
	sort(words.begin(), words.end());
	for (int i = 0; i < m; ++i) 
		output+=binary_search(S.begin(), S.end(), words[i]);
	cout << output;
	return 0;
}