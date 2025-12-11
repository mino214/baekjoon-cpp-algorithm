#include<iostream>
#include<string>
using namespace std;
int main() {
	string input_line;
	char word[5][15]; int count;
	char word_length[5] = { 0 };
	for(int i=0 ; i<5 ; ++i){
		cin >> input_line;
		word_length[i] = input_line.length();
		count = 0;
		for (int j = 0; j < word_length[i]; ++j)
		{
			if (word_length[i] != ' ') {
				word[i][count] = input_line[j];
				++count;
			}
		}
	}
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < word_length[i]; ++j) {
			cout << word[i][j] << " ";
		}
		cout << endl;
	}
}