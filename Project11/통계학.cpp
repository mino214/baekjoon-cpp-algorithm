#include<iostream>
#include <cmath>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
using namespace std;
int main() {
	vector<int> list;
	map<int, int> m_list;
	set<int> s_list;
	int n, input,range=0,m_max=-9999;
	long double total = 0;
	double avg, median;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> input;
		if (m_list.empty() || m_list.find(input) == m_list.end())
			m_list.insert({ input,1 });
		else if (m_list.find(input) != m_list.end())
			++m_list[input];
		if (m_max < m_list[input])
			m_max = m_list[input];
		total += input;
		list.push_back(input); 
	}
	for (auto i = m_list.begin(); i != m_list.end(); ++i) {
		if (m_max == i->second)
			s_list.insert(i->first);
	}
	sort(list.begin(), list.end());
	avg = total / n;                      // Æò±Õ
	avg = (round(avg) == -0) ? 0 : round(avg);
	int index = list.size() / 2;          // Áß¾Ó°ª
	median = (list.size() % 2 == 0) ? (list[index] + list[index - 1]) / 2 : list[index];
	auto mode = s_list.begin();           // ÃÖºó°ª
	if (s_list.size() > 1)
		++mode;
	int max = *max_element(list.begin(), list.end());// ¹üÀ§
	int min = *min_element(list.begin(), list.end());
	for (int i = min; i < max; ++i)
		++range;
	cout << avg << "\n";
	cout << median << "\n";
	cout << *mode << "\n";
	cout << range;
	return 0;
}