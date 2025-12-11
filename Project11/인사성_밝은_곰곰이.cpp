#include<iostream>
#include<algorithm>
#include<set>
#include<string>
#include<deque>
using namespace std;
int main() {
	set<string> new_parson;
	deque<string> list;
	int n; string input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		list.push_back(input);
	}
	list.pop_front();
	int total = 0;
	for (int i = 1; i < n; ++i) {
		if (list.front().compare("ENTER") == 0) {
			total += new_parson.size();
			new_parson.clear();
		}
		else
			new_parson.insert(list.front());
		list.pop_front();
	}
	total += new_parson.size();
	cout << total;
	return 0;
}