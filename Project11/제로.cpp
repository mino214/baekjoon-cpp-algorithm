#include<iostream>
#include<stack>
using namespace std;
int main() {
	int n,input; 
	long long int total = 0;
	stack<int> st;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		if (input == 0 && !st.empty())
			st.pop();
		else
			st.push(input);
	}
	int count = st.size();
	for (int i = 0; i<count ; ++i) {
		total += st.top();
		st.pop();
	}cout << total;
	return 0;
}