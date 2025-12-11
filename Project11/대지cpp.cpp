#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef struct N_Point {
	int n;
	vector<int> x;
	vector<int> y;
	int output;
}*P_Point;
void Input(P_Point p) {
	cin >> p->n;
	for (int i = 0; i < p->n; ++i) {
		int x, y;
		cin >> x >> y;
		p->x.push_back(x);
		p->y.push_back(y);
	}
}
void Fine_Max_Min(P_Point p) {
	int max_x,max_y;
	int min_x, min_y;
	max_x = *max_element(p->x.begin(), p->x.end());
	min_x = *min_element(p->x.begin(), p->x.end());
	max_y = *max_element(p->y.begin(), p->y.end());
	min_y = *min_element(p->y.begin(), p->y.end());
	p->output = (max_x - min_x) * (max_y - min_y);
}
int main() {
	N_Point np;
	Input(&np);
	Fine_Max_Min(&np);
	cout << np.output;
	return 0;
}