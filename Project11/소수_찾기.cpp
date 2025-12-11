#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct Number {
	int n;
	vector<int> prime_number;
	int count = 0;
}*P_Number;
void Input(P_Number p) {
	int input;
	cin >> p->n;
	for (int i = 0; i < p->n; ++i) {
		cin >> input;
		p->prime_number.push_back(input);
	}
}
int Count_number(P_Number p, int index) {
	if (p->prime_number[index] == 1)
		return 0;
	vector<int> prime_number_list;
	prime_number_list.clear();
	for (int i = 1; i <= p->prime_number[index]; ++i) {
		if (p->prime_number[index] % i == 0)
			prime_number_list.push_back(i);
	}
	auto a = find(prime_number_list.begin(), prime_number_list.end(), 1);
	auto b = find(prime_number_list.begin(), prime_number_list.end(), p->prime_number[index]);
	if (a != prime_number_list.end() && b !=prime_number_list.end() && prime_number_list.size()==2)
		return 1;
	else
		return 0;
}
void Check_Prime_number(P_Number p){
	for (int i = 0; i < p->n; ++i) {
		p->count += Count_number(p, i);
	}
}
int main() {
	Number n;
	Input(&n);
	Check_Prime_number(&n);
	cout << n.count;
	return 0;
}