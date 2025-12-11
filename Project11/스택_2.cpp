#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> stack;
void Show(int n) {
	if (n != 0)
		cout<< stack[n-1]<< "\n";
	else
		cout<< "-1" <<"\n";
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int n,input;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		switch (input){
		case 1: // input
			int a; cin >> a;
			stack.push_back(a);
			break;
		case 2: // top intage out and show ( empty  = -1)
			Show(stack.size());
			if (stack.size() != 0)
				stack.pop_back();
			break;
		case 3: // show count
			cout<< stack.size() << "\n";
			break;
		case 4: // stack empty(0) or full(1) 
			cout<< ((stack.size() != 0) ? 0 : 1) << "\n";
			break;
		case 5: // top intage show (empty = -1)
			Show(stack.size());
			break;
		}
	}
	return 0;
}