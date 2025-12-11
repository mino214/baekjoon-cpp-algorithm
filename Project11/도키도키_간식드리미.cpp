#include<iostream>
#include<stack>
#include<vector>
using namespace std;
vector<int> students; 
stack<int>st;  
int main() {        // 1 and 2가 만족 , 1 or 2 만족 , 불만족
	int n, input;   // 1. number와 students가 같은 경우          
	int number = 1; // 2. number와 stack이 같은 경우;        
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		students.push_back(input);
	}
	for (int i = 0; i < n; ++i) {
		bool sw = false;
		if (students[i] == number) {
			++number;  sw = true;
		}
		if (!st.empty() && st.top() == number) {
			sw = true;
			while (!st.empty()) {
				if (st.top() == number) {
					st.pop();
					++number;
				}else {	break ;}
			}
		}
		if(!sw)
			st.push(students[i]);
	}
	if (st.empty())
		cout << "Nice";
	else
		cout << "Sad";
	return 0;
}