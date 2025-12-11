#include<iostream>
#include<string>
using namespace std;
typedef struct Input_value{
	int input_count;
	int count = 0;
	string words[100];
	int words_length[100];
	int apb[26];
}*I_value;
void Apb_reset(I_value I) {
	for (int i = 0; i < 26; ++i)
		I->apb[i] = 0;
}
void Checker(I_value I) {
	bool sw;
	for (int i = 0; i < I->input_count; ++i) {
		sw = false;
		Apb_reset(I); // alphabet reset and Initial value 
		for (int j = 0; j < I->words_length[i]; ++j) {
			for (int k = 0; k < 26; ++k) {
				if ('a' + k == I->words[i][j]) {
					++I->apb[k];
					if (I->apb[k] > 1 && I->words[i][j - 1] != I->words[i][j])
						sw = true;
					break;
				}
			}
			if (sw)
				break;
		}
		if (!sw)
			++I->count;
	}
}
int main() {
	Input_value I;
	cin >> I.input_count;
	for (int i = 0; i < I.input_count; ++i){
		cin >> I.words[i];
		I.words_length[i] = I.words[i].length();
	}
	Checker(&I);
	cout << I.count;
	return 0;
}