#include<iostream>
using namespace std;
#include<string>
int main(){
	string  input;
	int apb_count[26] = { 0 }; int max = 0;
	cin >> input;
	int in_len = input.length();
	for (int i = 0; i < in_len; ++i){
		for (int j = 0; j < 26; ++j){
			if (input[i] == char('a' + j) || input[i] == char('A' + j)) {
				++apb_count[j];
				break;
			}
		}
	}
	int index;
	for (int i = 0; i < 26; ++i) {
		if (max < apb_count[i]){
			index = i;
			max = apb_count[i];
		}
	}
	int duplicate_ck = 0;
	for(int i=0 ; i<26 ; ++i){
		if (max == apb_count[i])
			++duplicate_ck;
	}
	if (duplicate_ck > 1)
		cout << "?";
	else
		cout << char('A' + index);
}