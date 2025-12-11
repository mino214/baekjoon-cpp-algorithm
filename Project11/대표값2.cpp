#include<iostream>
using namespace std;
int main() {
	int number[5];
	int total=0, avg;
	for (int i = 0; i < 5; ++i) {
		cin >> number[i];
		total += number[i];
	}
	avg = total / 5;
	for (int i = 0; i < 5; ++i) {
		bool sw = true;
		for (int j = 5 - 1; j > i; --j) {
			if (number[j] < number[j - 1]) {
				int temp = number[j];
				number[j] = number[j - 1];
				number[j - 1] = temp;
				sw = false;
			}
		}
		if (sw)
			break;
	}
	cout << avg<< endl;
	cout << number[2];
	return 0;
}