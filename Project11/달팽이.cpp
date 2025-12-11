#include<iostream>
using namespace std;
int main() {    // ³·¿¡ 'a'M¿Ã¶ó°¨ ¹ã¿¡ 'b'M¶³¾îÁü vM±îÁö ¿Ã¶ó°¡¾ßÇÔ
	int a, b, v;
	int day, sw;
	cin >> a >> b >> v;      // 2 1 5
	day = (v - a) / (a - b); // 3 / 1 = 3
	sw = (v - a) % (a - b);
	if (sw == 0)
		day += 1;
	else
		day += 2;
	cout << day;
}