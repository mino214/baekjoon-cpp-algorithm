#include<iostream>
#include<string>
#include<vector> 
#include<algorithm>
#include<numeric> // vector sum
using namespace std;
typedef struct Number {
	vector<int> n;
	int count = 0;
}*P_Number;
void Input(P_Number p) {
	int n;
	while (true) {
		cin >> n;
		if (n == -1)
			break;
		p->n.push_back(n);
	}
	p->count = p->n.size();
}
void A_Total_Number_Check_Print(P_Number p) {
	string out_text = " is NOT perfect.";
	vector<int> factors;
	for (int i = 0; i < p->count; ++i) {
		factors.clear();
		for (int j = 1; j < p->n[i]; ++j) {
			if (p->n[i] % j == 0)
				factors.push_back(j);
		}
		if (accumulate(factors.begin(), factors.end(), 0) == p->n[i]) {
			cout << p->n[i] << " = "<<factors[0];
			for (int j = 1; j < factors.size(); ++j)
				cout << " + " << factors[j];
			cout << endl;
		}
		else
			cout << p->n[i] << out_text << endl;
	}
}
int main() {
	Number nb;
	Input(&nb);
	A_Total_Number_Check_Print(&nb);
	return 0;
}