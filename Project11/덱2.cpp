#include<iostream>
#include<deque>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	deque<int> list;
	int n,input,x;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> input;
		switch (input){
		case 1:  // 1 X: 정수 X를 덱의 앞에 넣는다
			cin >> x;
			list.push_front(x);
			break;
		case 2:  // X: 정수 X를 덱의 뒤에 넣는다
			cin >> x;
			list.push_back(x);
			break;
		case 3:  // 3: 덱에 정수가 있다면 맨 앞의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
			if (!list.empty()) {
				cout << list.front() << "\n";
				list.pop_front();
			}
			else
				cout << "-1\n";
			break;
		case 4:  // 4: 덱에 정수가 있다면 맨 뒤의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
			if (!list.empty()) {
				cout << list.back() << "\n";
				list.pop_back();
			}
			else
				cout << "-1\n";
			break;
		case 5:  // 5: 덱에 들어있는 정수의 개수를 출력한다.
			cout<<list.size()<<"\n";
			break;
		case 6:  // 6: 덱이 비어있으면 1, 아니면 0을 출력한다.
			cout << ((list.empty()) ? 1 : 0) << "\n";
			break;
		case 7:  // 7: 덱에 정수가 있다면 맨 앞의 정수를 출력한다. 없다면 -1을 대신 출력한다.
			cout << ((list.empty()) ? -1 : list.front()) << "\n";
			break;
		case 8:  // 8: 덱에 정수가 있다면 맨 뒤의 정수를 출력한다. 없다면 -1을 대신 출력한다.
			cout << ((list.empty()) ? -1 : list.back()) << "\n";
			break;
		default:
			break;
		}
	}
	return 0;
}