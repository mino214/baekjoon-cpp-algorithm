#include<iostream>
#include<queue>
using namespace std;
int St_to_Int(string input) {
	if (input.compare("push") == 0)
		return 1;
	else if (input.compare("pop") == 0)
		return 2;
	else if (input.compare("size") == 0)
		return 3;
	else if (input.compare("empty") == 0)
		return 4;
	else if (input.compare("front") == 0)
		return 5;
	else if (input.compare("back") == 0)
		return 6;
	else
		return 7;
}
int main() {
	int n;
	string input;
	queue<int> que;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		switch (St_to_Int(input)) {
		case 1://push
			int number;
			cin >> number;
			que.push(number);
			break;
		case 2://pop
			cout << ((que.empty()) ? -1 : que.front())<<"\n";
			if (!que.empty())
				que.pop();
			break;
		case 3://size
			cout << que.size() << "\n";
			break;
		case 4://empty
			cout << ((que.empty()) ? 1 : 0 )<< "\n";
			break;
		case 5://front
			cout << ((que.empty()) ? -1 : que.front()) << "\n";
			break;
		case 6://back
			cout << ((que.empty()) ? -1 : que.back()) << "\n";
			break;
		}
	}
	return 0;
}