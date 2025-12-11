#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
typedef struct Number {
	int n, m;
	int total = 0, min = 0;
	bool sw=true;
}*P_number;
void Count_Prime_number(P_number p) {
	vector<int> prime_list;
	int count;
	for (int i = p->m; i <= p->n; ++i) {
		count = 0;
		for (int j = 1; j <= i; ++j) {
			if (i % j == 0)
				++count;
		}
		if (count == 2 && i != 1) {
			p->sw = false;
			prime_list.push_back(i);
		}
	}
	if (!p->sw) {
		p->total = accumulate(prime_list.begin(), prime_list.end(), 0);
		p->min = *min_element(prime_list.begin(), prime_list.end());
	}
}
void Output(P_number p){
	if (p->sw) {
		cout << "-1";
		return;
	}
	cout << p->total << endl;
	cout << p->min;
}
int main() {
	Number nb;
	cin >> nb.m >> nb.n;
	Count_Prime_number(&nb);
	Output(&nb);
	return 0;
}
