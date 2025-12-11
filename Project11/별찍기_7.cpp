#include<iostream>
using namespace std;
int main() {// 첫번째 줄부터 n*2 - 1 별찍기
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j<n-i-1; ++j)                     // n - i - 1 
			cout << " ";                                  // 5 - 0 - 1 = 4
		for (int j = 0; j <= i*2 ; ++j)                   // 5 - 1 - 1 = 3
			cout << "*";
		cout << endl;
		
	}
	for (int i = 0; i < n - 1 ; ++i) {
		for (int j = 0; j < i+1; ++j)
			cout << " ";
		for (int j = 0; j < (((n * 2)-3) - (i * 2)); ++j) //   n*2-3     -  i*2
			cout << "*";                                  //ex 5*2-3 = 7 -  0*2 -> 7   
		if(i+1 != n - 1)                                  //ex 5*2-3 = 7 -  1*2 -> 5
			cout << endl;
	}
	return 0;
}