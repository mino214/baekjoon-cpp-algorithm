#include<iostream>
#include<algorithm>
#include<string>
#include<set>
using namespace std;
int main() {
	set<string> dif_string;
	string input,temp;
	cin >> input;
	for (int i = 0; i < input.length(); ++i) {
		for (int j = 0; j < input.length() - i; ++j) {
			temp = input.substr(j, i + 1);// 시작 지점(pos)과 길이(len)를 
			dif_string.insert(temp);      // 전달받아서 부분 문자열을 리턴합니다.
			cout << temp << " ";
			temp.clear();
		}
	}
	cout << dif_string.size();
	return 0;
}