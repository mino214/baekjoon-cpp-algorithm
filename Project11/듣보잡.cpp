#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<map>
using namespace std;
map<string, int>name_list;
int main() { // 12992KB	 68ms
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	string name;
	vector<string> out_name;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> name;
		++name_list[name];
	}
	for (int i = 0; i < m; ++i) {
		cin >> name;
		++name_list[name];
		if (name_list[name] > 1)
			out_name.push_back(name);
	}
	sort(out_name.begin(), out_name.end());
	cout << out_name.size() << endl;
	for (int i = 0; i < out_name.size(); ++i)
		cout << out_name[i] << "\n";
	return 0;
}
/*  vector »ç¿ë 28ms, 6172KB
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	vector<string> name_list_n,out_list;
	string name;
	cin>>n>>m;
	for (int i = 0; i < n; ++i) {
		cin >> name;
		name_list_n.push_back(name);
	}
	sort(name_list_n.begin(), name_list_n.end());
	for (int i = 0; i < m; ++i) {
		cin >> name;
		auto it = lower_bound(name_list_n.begin(), name_list_n.end(), name) - name_list_n.begin();
		if (name_list_n[it] == name)
			out_list.push_back(name);
	}
	sort(out_list.begin(), out_list.end());
	cout << out_list.size()<<"\n";
	for (int i = 0; i < out_list.size(); ++i)
		cout << out_list[i] << "\n";
	return 0;
}
*/