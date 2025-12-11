#include<iostream>
using namespace std;
int main() { // a*x + b*y = c   d*x + e*y = f
	int a, b, c, d, e, f;
	int x, y;
	cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i <= 999; ++i) {
		for (int j = -999; j <= 999; ++j) {
			if (a * i + b * j == c && d * i + e * j == f) {
				x = i;
				y = j;
				break;
			}
		}
	}cout << x << " " << y;
}
/* problem explanation
다음 연립방정식에서 x와 y의 값을 계산하시오.
ㅣax + by = c
ㅣdx + ey = f
-input-
정수 a b c d e f 공백으로 구분되어 차례대로 주어진다.
문제에서 언급한 방정식을 만족하는 (x,y)가 유일하게 존재하고,
이 때 x와 y가 각각 -999이상 999이하의 정수만 입력이 보장된다.
-output-
문제의 답인 x와 y를 공백으로 구분하여 출력한다.
-ex-
- input -
1 3 -1 4 1 7      -> 1*x + 3*y = -1  ,   4*x + 1*y= 7
- output -
2 -1
- intput -        ->2*x + 5*y = 8    ,  3*x + -4*y = -11
2 5 8 3 -4 -11
- output -
-1 2

//int y = (c * d - a * f) / (b * d - a * e);
//int x = (c * e - b * f) / (a * e - b * d);
*/