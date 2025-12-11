#include<iostream>
using namespace std;
#include<string>     // "c=","c-","dz=","d-","lj","nj","s=","z="
typedef struct C_apb {  
	string words;       
	int words_length;   
	int count = 0;
	int i = 0;
	bool sw;
}*Pc_abp;
void Plus(Pc_abp p, int number) {
	++p->count;
	p->sw = false;
	p->i += number;
}
void Checking_words(Pc_abp p, int index, int number) {
	switch (number){
	case 1:
		if (p->words[index + 1] == '=' || p->words[index + 1] == '-')
			Plus(p, 1);
		break;
	case 2:
		if (p->words[index + 1] == '-') 
			Plus(p, 1);
		else if (p->words[index + 1] == 'z' && p->words[index + 2] == '=') 
			Plus(p, 2);
		break;
	case 3:
		if (p->words[index] == 'l' || p->words[index] == 'n') 
			Plus(p, 1);
		break;
	case 4:
		if (p->words[index] == 's' || p->words[index] == 'z')
			Plus(p, 1);
		break;
	}
}
void Check(Pc_abp p) {
	for (p->i = 0; p->i < p->words_length; ++p->i) {
		p->sw = true;
		if (p->words[p->i] == 'c')
			Checking_words(p, p->i, 1);
		else if (p->words[p->i] == 'd')
			Checking_words(p, p->i, 2);
		else if (p->words[p->i + 1] == 'j')
			Checking_words(p, p->i, 3);
		else if (p->words[p->i + 1] == '=')
			Checking_words(p, p->i, 4);
		if (p->sw)
			++p->count;
	}
}
int main(){
	C_apb ca;
	cin >> ca.words;
	ca.words_length = ca.words.length();
	Check(&ca);
	cout << ca.count;
}