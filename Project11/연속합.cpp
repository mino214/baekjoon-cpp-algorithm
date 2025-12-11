#include<iostream> 
#define MAX_SIZE 100001
using namespace std;
int list[MAX_SIZE];
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> list[i];
	int max_value = -1001;
	int sum = 0;
	for (int i = 0; i < n; ++i) {
		sum += list[i];
		if (sum > max_value)
			max_value = sum;
		if (sum <= 0)
			sum = 0;
	}
	cout << max_value;
	return 0;
}