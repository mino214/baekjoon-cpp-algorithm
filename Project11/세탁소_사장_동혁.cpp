#include<iostream>
#include<vector>
#include<algorithm>           // C = cent단위 100cent = 1$
using namespace std;          // 쿼터(Quarter, $0.25)의 개수, 
typedef struct Money {        // 다임(Dime, $0.10)의 개수, 
	int t;                    // 니켈(Nickel, $0.05)의 개수, 
	vector<int> c;            // 페니(Penny, $0.01)의 개수
	int output[4];
	int ct[4] = {25,10,5,1};
	int count;
}*P_Money;
void Reset(P_Money p) {
	for (int i = 0; i < 4; ++i)
		p->output[i] = 0;
	p->count = 0;
}
void Oper(P_Money p) {
	for (int i = 0; i < p->t; ++i) {
		Reset(p);
		while (p->c[i]>0) {
				p->output[p->count] = p->c[i] / p->ct[p->count];
				p->c[i] -= (p->c[i] / p->ct[p->count]) * p->ct[p->count];
			++p->count;
		}
		for (int j = 0; j < 4; ++j)
			cout << p->output[j] << " ";
		cout<<endl;
	}
}
int main() {
	Money m;
	cin >> m.t;
	m.c.resize(m.t);
	for (int i = 0; i < m.t; ++i)
		cin >> m.c[i];
	Oper(&m);
}