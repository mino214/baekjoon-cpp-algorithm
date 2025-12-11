#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct Value {          // 첫 번째 숫자가 두 번째 숫자의 약수라면 factor를, 
	vector<vector<int>> numbers;// 배수라면 multiple을, 둘 다 아니라면 neither를 출력한다.
	int count = 0;              //"factor","multiple"," neither"
}*P_Value;
void Input(P_Value p) {
	while (true) {
		vector<int> index; int n, m;
		cin >> n >> m;
		if (n + m == 0)
			break;
		index.clear();
		index.push_back(n); index.push_back(m);
		p->numbers.push_back(index);
		++p->count;
	}
}
void Output(int n,int m, int index) {
	switch (index){
	case 0:
		if (m % n == 0) {
			cout << "factor" << endl;
			return;
		}
		break;
	case 1:
		if (n % m == 0) {
			cout << "multiple" << endl;
			return;
		}
		break;
	}
	cout << "neither" << endl;
}
void Oper(P_Value p) {
	for (int i = 0; i < p->count; ++i) {
		if (p->numbers[i][0] < p->numbers[i][1])// 약수
			Output(p->numbers[i][0], p->numbers[i][1], 0);
		else // 배수
			Output(p->numbers[i][0], p->numbers[i][1], 1);
	}
}
int main() {
	Value v;
	Input(&v);
	Oper(&v);
}