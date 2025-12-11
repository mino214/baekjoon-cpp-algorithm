#include<iostream>
using namespace std;
#include<string>
#include <cstring>
typedef struct Student {
    string name[20];
	char credit[20][3];
	int count = 0;
	double rating[20], total=0,c_total=0;
}ST;
void return_credit(ST* s, int index){

	if (strcmp(s->credit[index], "P") == 0)
		return;

	if (strcmp(s->credit[index], "A+") == 0) {
		s->total += 4.5 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "A0") == 0) {
		s->total += 4.0 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "B+") == 0) {
		s->total += 3.5 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "B0") == 0) {
		s->total += 3.0 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "C+") == 0) {
		s->total += 2.5 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "C0") == 0) {
		s->total += 2.0 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "D+") == 0) {
		s->total += 1.5 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "D0") == 0) {
		s->total += 1.0 * s->rating[index];
	}
	else if (strcmp(s->credit[index], "F") == 0) {
		s->total += 0.0;
	}
	s->c_total += s->rating[index];
	++s->count;
}
int main() {
	//과목명(string), 학점(float), 등급(char)
	ST s;
	for (int i = 0; i < 20; ++i){
		cin >> s.name[i] >> s.rating[i] >> s.credit[i];
	}
	for (int i = 0; i < 20; ++i) {
		return_credit(&s,i);
	}
	double avg = s.total / s.c_total;
	cout << avg;
}