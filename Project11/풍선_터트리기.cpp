#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main() {
	deque<int> list;
	deque<int> number;
	int n,input;
	cin >> n;
	for (int i = 0; i < n; ++i){
		cin >> input;
		list.push_back(input);}
	for(int i = 2 ; i<=n ; ++i)
		number.push_back(i);
	int temp = list.front();
	list.pop_front();
	cout << "1 ";
	for (int i = 1; i < n; ++i) {
		if (temp > 0) { //right
			for (int j = 0; j < temp - 1; ++j){
				int t = number.front();
				int tl = list.front();
				number.pop_front();
				number.push_back(t);
				list.pop_front();
				list.push_back(tl);
			}
			cout << number.front() << " ";
			number.pop_front();
			temp = list.front();
			list.pop_front();
		} 
		else {//left
			for (int j = 0; j < abs(temp) - 1; ++j) {
				int t = number.back();
				int tl = list.back();
				number.pop_back();
				number.push_front(t);
				list.pop_back();
				list.push_front(tl);
			}
			cout << number.back() << " ";
			number.pop_back();
			temp = list.back();
			list.pop_back();
		}
	}
	return 0;
}
/*
우선, 제일 처음에는 1번 풍선을 터뜨린다.
다음에는 풍선 안에 있는 종이를 꺼내어 그 종이에 적혀있는 값만큼 이동하여
다음 풍선을 터뜨린다.
양수가 적혀 있을 경우에는 오른쪽으로, 음수가 적혀 있을 때는 왼쪽으로 이동한다. 
이동할 때에는 이미 터진 풍선은 빼고 이동한다.
*/

/*
* #include <iostream>
#include <deque>
using namespace std;
deque<pair<int,int>> dq;
int N;
int main(void)
{
	cin >> N;
	int num;
	for (int i = 0; i < N; i++)
	{
		cin >> num;
		dq.push_back(make_pair(num,i+1)); // 덱에 이동해야할 수와 몇번째였는지 저장
	}
	while (!dq.empty())
	{
		int cur = dq.front().first;
		cout << dq.front().second << " ";
		dq.pop_front();

		if (dq.empty()) //덱이 비었는데 덱 연산을하면 에러 나므로 break 해주기
			break;

		if (cur > 0)
		{ // 양수이면 이미 출력후 pop을 한번 했기에 cur-1번만 front를 back으로 옮기기
			for (int i = 0; i < cur-1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = 0; i < (-1)*cur; i++)
			{ // 음수일 경우 왼쪽 이동이므로 맨뒤의것을 맨앞으로 옮기기
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
}
*/