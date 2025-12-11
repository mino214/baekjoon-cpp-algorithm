#include<iostream>
using namespace std;
#include<string>
typedef struct Word {
	string word[5];
	int line_length[5] = { 0 };
};
void input(Word* w) {
	for(int i=0; i<5 ; ++i)
		cin >> w->word[i];
	for (int i = 0; i < 5; ++i)
		w->line_length[i] = w->word[i].length();
}
void output(Word* w) {
	int max = 0;
	for (int i = 0; i < 5; ++i) {
		if (w->line_length[i] > max)
			max = w->line_length[i];
	}
	for (int i = 0; i < max; ++i){
		for (int j = 0; j < 5; ++j) {
			if(w->line_length[j]>i)
				cout << w->word[j][i];
		}
	}
}
int main() {
	Word w;
	input(&w);
	output(&w);
	return 0;
}