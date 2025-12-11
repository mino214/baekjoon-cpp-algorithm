#include<iostream>
using namespace std;
int main() {        //n  =  1 -> 9  (3)              // 3 -> 81 (9)  
	int n;          //n  =  2 -> 25 (5)             // 4 -> 289 (17)
	int point = 1;  //n  =  5 -> 1089 (33)             
	cin >> n;
	for (int i = 0; i < n; ++i)
		point *= 2;
	++point;
	point *= point;
	cout<<point;
}