#include<iostream>
#include<string>
using namespace std; // 1이 될 때 까지 1/2로 쪼갠다
bool Pelindrome(string str) {
	if (str.length() == 1)
		return true;
	int len = str.length() / 2;
	for (int i = 0; i < len; ++i) {
		if (str[i] != str[str.length() - 1 - i])
			return false;
	}
	if (str.length() > 1) {
		string t = str.substr(0, len);
		if (!Pelindrome(t))
			return false;
	}
	return true;
}
int main() {
	string words;
	cin >> words;
	if (Pelindrome(words))
		cout << "AKARAKA";
	else
		cout << "IPSELENTI";
	return 0;
}