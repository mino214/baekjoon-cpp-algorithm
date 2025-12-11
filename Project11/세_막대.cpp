#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<int> abc;
	int a, b, c;
	int circumference = 0;
	cin >> a >> b >> c;
	abc.push_back(a);
	abc.push_back(b);
	abc.push_back(c);
	sort(abc.begin(), abc.end());
	while (true) {
		if (abc[0] == abc[1] && abc[0] ==
			abc[2] && abc[1] == abc[2]) {
			for (int i = 0; i < 3; ++i)
				circumference += abc[i];
			break;
		}
		if (abc[2] >= abc[0] + abc[1])
			--abc[2];
		else{
			for (int i = 0; i < 3; ++i)
				circumference += abc[i];
			break;
		}
	}
	cout << circumference;
	return 0;
}
/*가장
긴 변의 길이보다 나머지 두 변의 길이의 
합이 길지 않으면 삼각형의 조건을 만족하지 못한다.

영선이는 길이가 a, b, c인 세 막대를 가지고 있고, 각 막대의 길이를 마음대로 줄일 수 있다.

영선이는 세 막대를 이용해서 아래 조건을 만족하는 삼각형을 만들려고 한다.

각 막대의 길이는 양의 정수이다
세 막대를 이용해서 넓이가 양수인 삼각형을 만들 수 있어야 한다.
삼각형의 둘레를 최대로 해야 한다.
a, b, c가 주어졌을 때, 만들 수 있는 가장 큰 둘레를 구하는 프로그램을 작성하시오.

*/