#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	cout << ((n > 1) ? int(pow(2,n)) : n * 2);
	return 0;
}