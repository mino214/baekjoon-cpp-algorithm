#include<iostream>
#include<string>
#include<algorithm> // 정렬, 순열 vector or container 함께 #include
using namespace std;
typedef struct Input {
	int b;
	string n;
	int output=0;
}*P_Input;
int Apb_to_int(char a) {
	int num = 10;
	for (int i = 'A'; i <= 'Z'; ++i) {
		if (i == a)
			return num;
		++num;
	}
}
void Trans(P_Input p) {
	int temp;
	reverse(p->n.begin(), p->n.end());
	for (int i = 0; i < p->n.length(); ++i) {
		if (p->n[i] >= '0' && p->n[i] <= '9')
			temp = p->n[i] - '0'; // 아스키코드 값이 나오기 때문에 '0'의 아스키 코드 값을 
		else                      // 제거에서 0 ~ 9로 나오게 함
			temp = Apb_to_int(p->n[i]);
		int t=1;
		for (int j = 0; j < i; ++j)
			t *= p->b;
		p->output += t * temp;
	}
}
int main() {
	Input in;
	cin >> in.n >> in.b;
	Trans(&in);
	cout << in.output;
}