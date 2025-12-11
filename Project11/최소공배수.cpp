#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	vector<pair<int, int>> ab;
	vector<int> output;
	int t, a, b;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> a >> b;
		ab.push_back({ a,b });
	}
	for (int i = 0; i < t; ++i) {
		int temp = (ab[i].first < ab[i].second) ? ab[i].first : ab[i].second;
		int count = 1;
		while (true) {
			int total = temp * count;
			if (total == 1) {
				temp= (ab[i].first > ab[i].second) ? ab[i].first : ab[i].second;
				break;
			}
			if (total % ab[i].first == 0  && total % ab[i].second == 0)
				break;
			++count;
		}
		cout <<temp*count<< "\n";
	}
	return 0;
}
/*
#include<iostream>
using namespace std;
int divide(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return divide(y, x % y);
}
int main()
{
	int T;
	int A, B;	
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		if (A >= B)
		{
			cout << A * B / divide(A, B) << "\n";
		}
		else
			cout << A * B / divide(B, A) << "\n";
	}
}
*/