#include<iostream>
#include<queue>
#include<algorithm>
#include<string>
using namespace std;
int call;
int recursion(const string s, int l, int r) {
	++call;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}
int isPalindrome(const string s) {
	return recursion(s, 0, s.length()-1);
}
int main() {
	int n;
	string input;
	queue<string> list;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		list.push(input);
	}
	for (int i = 0; i < n; ++i) {
		cout << isPalindrome(list.front()) << " ";
		cout << call << "\n";
		list.pop();
		call = 0;
	}
	return 0;
}
/*
1 2
1 3
1 3
0 2
0 1
*/