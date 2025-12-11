#include<iostream>
#include<vector>
#include<cmath>
#define MAX_SIZE 1025
#define NODE_SIZE 512
using namespace std;
int tree[MAX_SIZE];
int k, len, dep; // 짝수 우선 출력 맨 마지막은 다 홀수 
vector<int> output;
void Tree_Circuit(int depth, int start, int end){
	if (start >= end) {
		dep = depth;
		return;
	}
	int mid = (start + end) / 2;
	output.push_back(tree[mid]);
	Tree_Circuit(depth + 1, start, mid);
	Tree_Circuit(depth + 1, mid + 1, end);
}
int main() {
	cin >> k;
	len = (int)pow(2, k) - 1;
	for (int i = 0; i < len; ++i)
		cin >> tree[i];
	Tree_Circuit(0, 0, len);
	int start = 0, end = 1;
	for (int i = 0; i < dep; ++i) {
		for (int j = start; j < end; ++j)
			cout << output[j]<<" ";
		cout << "\n";
		start = end;
		end = end * 2+1;
	}
	return 0;
}