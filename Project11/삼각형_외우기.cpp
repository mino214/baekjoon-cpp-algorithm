#include<iostream>
using namespace std;
int main() {
	int triangle[3];
	int total = 0;
	string output[4] = { "Equilateral","Isosceles","Scalene","Error" };
	for (int i = 0; i < 3; ++i) {
		cin >> triangle[i];
		total += triangle[i];
	}
	if (triangle[0] == 60 && triangle[1] == 60 && triangle[2] == 60)
		cout << output[0];
	else if (total == 180) {
		if (triangle[0] == triangle[1] ||
			triangle[0] == triangle[2] || triangle[1] == triangle[2])
			cout << output[1];
		else
			cout << output[2];
	}
	else
		cout << output[3];
	return 0;
}
/*
세 각의 크기가 모두 60이면, Equilateral
세 각의 합이 180이고, 두 각이 같은 경우에는 Isosceles
세 각의 합이 180이고, 같은 각이 없는 경우에는 Scalene
세 각의 합이 180이 아닌 경우에는 Error
*/