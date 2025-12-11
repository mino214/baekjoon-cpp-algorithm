#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
typedef struct Input{
	int n;
	int b;
	string output;
}*P_Input;
void Trans(P_Input p) {
	while(p->n > 0) {
		int temp = p->n % p->b;
		if (temp>=0 && temp<=9)
			p->output += temp + '0';
		else
			p->output += (char)temp + '7';
		p->n /= p->b;
	}
	reverse(p->output.begin(), p->output.end());
}
int main() {
	Input in;
	cin >> in.n >> in.b;
	Trans(&in);
	cout << in.output;
}