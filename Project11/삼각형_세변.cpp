#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int a, b, c;
	string text[4] = { "Equilateral", "Isosceles", "Scalene", "Invalid" };
	vector<string> output;
	vector<int>abc;
	while (true) {
		cin >> a >> b >> c;
		int total = a + b + c;
		if (total == 0)
			break;
		abc.clear();
		abc.push_back(a);
		abc.push_back(b);
		abc.push_back(c);
		sort(abc.begin(), abc.end());  // 정렬
		if (abc[2] >= abc[0] + abc[1]) // 조건 불만족 
			output.push_back(text[3]);
		else {
			abc.erase(unique(abc.begin(),abc.end()),abc.end()); // 중복제거
			if (abc.size() == 1)
				output.push_back(text[0]);
			else if(abc.size() == 2)
				output.push_back(text[1]);
			else
				output.push_back(text[2]);
		}
	}
	for (int i = 0; i < output.size(); ++i)
		cout << output[i] << endl;
	return 0;
}
/*
삼각형의 세 변의 길이가 주어질 때 변의 길이에 따라 다음과 같이 정의한다.
Equilateral :  세 변의 길이가 모두 같은 경우
Isosceles : 두 변의 길이만 같은 경우
Scalene : 세 변의 길이가 모두 다른 경우
단 주어진 세 변의 길이가 삼각형의 조건을 만족하지 못하는 경우에는 "Invalid" 를 출력한다. 
예를 들어 6, 3, 2가 이 경우에 해당한다. 가장 긴 변의 길이보다 나머지 두 변의 길이의
합이 길지 않으면 삼각형의 조건을 만족하지 못한다.
세 변의 길이가 주어질 때 위 정의에 따른 결과를 출력하시오.
*/