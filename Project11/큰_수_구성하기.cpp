#include<iostream>
#include<cmath>
#define MAX_SIZE 4
#define MAX_LIST_SIZE 10
using namespace std;
int max_value, num; 
int n, length;
int sequence[MAX_SIZE];
int list[MAX_LIST_SIZE];
int Array_to_int(int cnt) {
	int total = 0;
	int len = (int)pow(10,cnt-1);
	for (int i = 0; i < cnt; ++i) {
		total += list[i] * len;
		len = len / 10;
	}
	return total;
}
void Print(int cnt) {
	for (int i = 0; i < cnt; ++i)
		cout << list[i] << " ";
	cout << "\n";
}
void Oper(int cnt) {
	if (cnt > length + 1)
		return;
	else {
		int total = Array_to_int(cnt);
		if (total > max_value && total <= num)
			max_value = total;
		//Print(cnt);
	}
	for (int i = 0; i < n; ++i) {
		list[cnt] = sequence[i];
		Oper(cnt + 1);
	}
}
int main() { // n보다 작거나 같은 조합
	max_value = -1;
	cin >> num >> n;
	length = (int)log10(num);
	for (int i = 0; i < n; ++i)
		cin >> sequence[i];
	Oper(0);
	cout << max_value;
	return 0;
}