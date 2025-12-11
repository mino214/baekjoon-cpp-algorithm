#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
typedef struct Words {
	string line;
	vector<string> out_text;
}*P_Words;
int Input(P_Words p) {
	getline(cin,p->line);
	if (p->line.compare(".") == 0)
		return 0;
	return 1;
}
int Judgment_Words(P_Words p) {
	stack<char> ba;
	if (p->line[p->line.length() - 1] != '.')
		return 1;
	for (int i = 0; i < p->line.length()-1; ++i) {
		if (p->line[i] == '.')
			return 1;
		if (p->line[i] == '[') //push
			ba.push('[');
		else if (p->line[i] == ']') { // check
			if (ba.empty() || ba.top() != '[')
				return 1;
			ba.pop();
		}
		else if (p->line[i] == '(')  //push
			ba.push('(');
		else if (p->line[i] == ')') { // check
			if (ba.empty() || ba.top() != '(')
				return 1;
			ba.pop();
		}
	}
	if (!ba.empty())
		return 1;
	return 0;
}
int main(){
	Words w;
	while (true) {
		int sw=Input(&w);
		if (sw == 0)
			break;
		if (Judgment_Words(&w) == 0)
			w.out_text.push_back("yes");
		else
			w.out_text.push_back("no");
		w.line.clear();
	}
	for (int i = 0; i < w.out_text.size(); ++i)
		cout << w.out_text[i] << "\n";
	return 0;
}