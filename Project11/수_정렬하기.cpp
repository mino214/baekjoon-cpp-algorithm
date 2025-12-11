#include<iostream>
using namespace std;
int main() {
	int number_list[1000];
	int n; bool sw;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> number_list[i];
	for (int i = 0; i < n; ++i) {
		int sw = true;
		for (int j = n - 1; j > i ; --j) {
			if (number_list[j] < number_list[j - 1]) {
				int temp = number_list[j-1];
				number_list[j-1] = number_list[j];
				number_list[j] = temp;
				sw = false;
			}
		}
		if (sw)
			break;
	}
	for (int i = 0; i < n; ++i)
		cout << number_list[i] << "\n";
	return 0;
}