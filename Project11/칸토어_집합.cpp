#include<iostream>
#include<cmath>
using namespace std; // 3^3 27 - > 9 -> 3 
void Change(int lenght) {
	if (lenght == 1) {
		cout << "-";
		return;
	}
	Change(lenght / 3);
	for (int i = 0; i < lenght / 3; ++i)
		cout<<" ";
	Change(lenght / 3);
}
void Line_to_Gap(int length) {
	Change(length);
	cout << "\n";
}
int main() {
	int n;
	int lenght;		
	while (cin >> n) {
		lenght = (int)pow(3, n);
		Line_to_Gap(lenght);
	}
	return 0;
}