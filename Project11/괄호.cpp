#include<iostream>
#include<vector>
using namespace std;
typedef struct Parenthesis {
	vector<string> out_print;
	int n;
}*P_Parent;
void Input_String_Judgment(P_Parent p) {
	string line;
	cin >> line;
	if (line[0] == ')' || line[line.length() - 1] == '(') {
		p->out_print.push_back("NO");
		return;
	}
	else {
		int sw = 0;
		for (int i = 0; i < line.length(); ++i) {
			if (line[i] == '(')
				++sw;
			else
				--sw;
			if (sw < 0)
				break;
		}
		if (sw == 0)
			p->out_print.push_back("YES");
		else
			p->out_print.push_back("NO");
	}
}
int main() {
	Parenthesis p;
	cin>>p.n;
	for (int i = 0; i < p.n; ++i)
		Input_String_Judgment(&p);
	for (int i = 0; i < p.out_print.size(); ++i)
		cout << p.out_print[i] << "\n";
	return 0;
}