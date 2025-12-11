#include<iostream>
using namespace std;
int main() {
	int x; int i = 1;
	cin >> x;
	while (x > i) { // ex x=5                        x=6
		x -= i;     // ex x=4 , i=2 -> x=2, i = 3    
		++i;        // ex x=5 , i=2 -> x=3, i = 3
	}
	if (i % 2 == 1) // 3 + 1 - 3  /  3  
		cout << i + 1 - x << '/' << x;
	else  // 2           3 + 1 - 2 ->2 
		cout << x << '/' << i + 1 - x;
}