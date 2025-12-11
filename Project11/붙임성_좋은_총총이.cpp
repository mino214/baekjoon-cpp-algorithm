#include<iostream>
#include<set>
using namespace std;
int main() {
	int n;
	string in_1, in_2;
	set<string> Dance_list;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> in_1 >> in_2;
		if (in_1.compare("ChongChong") == 0 || in_2.compare("ChongChong") == 0 || 
			Dance_list.count(in_1) == 1 || Dance_list.count(in_2) == 1) {
			Dance_list.insert(in_1);
			Dance_list.insert(in_2);
		}
	}
	cout << Dance_list.size();
	return 0;
}