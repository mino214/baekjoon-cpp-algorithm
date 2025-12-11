#include<iostream>                //3 - 3 7 - 15 7  - 5 2  -> 260
using namespace std;              //distance between laft, distance between below
typedef struct Paper {            
	int count;
	int b_paper[100][2];
	int drawing_paper[100][100] = { 0 };
	int total = 0;
}*P_Paper;
void Input(P_Paper p){
	cin >> p->count;
	for (int i = 0; i < p->count; ++i)
		cin >> p->b_paper[i][0]>>p->b_paper[i][1];
}
void Oper(P_Paper p) {
	for (int i = 0; i < p->count; ++i) {
		for (int j = p->b_paper[i][0]; j < p->b_paper[i][0] + 10; ++j) {
			for (int k = p->b_paper[i][1]; k < p->b_paper[i][1] + 10; ++k)
				p->drawing_paper[j][k] = 1;
		}
	}	
	for (int i = 0; i < 100; ++i) {
		for (int j = 0; j < 100; ++j)
			p->total += p->drawing_paper[i][j];
	}
}
int main() {
	Paper p;
	Input(&p);
	Oper(&p);
	cout << p.total;
	return 0;
}
