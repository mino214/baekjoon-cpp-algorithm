#include<iostream>
#define MAX_SIZE 101
using namespace std;
int n;
int A[MAX_SIZE];
int oper[MAX_SIZE - 1]; // + - * %
int main() {
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> A[i];
	for (int i = 0; i < n - 1; ++i)
		cin >> oper[i];
	return 0;
}