#include<iostream>
#include<vector>
#include<string>
using namespace std;
typedef struct Chess {
    vector<string>chess_board;
	int n, m;
	int min=999999;
}*P_Chess;
void Input(P_Chess p) {
    cin >> p->n >> p->m;
	for (int i = 0; i < p->n; ++i) {
		string chess_line;
		cin >> chess_line;
		p->chess_board.push_back(chess_line);
	}
}
int Return_Count(P_Chess p, int pi, int pj, bool sw) {
	int re_value = 0;
	bool change_color = sw;
	for (int i = pi; i < pi + 8; ++i) {
		for (int j = pj; j < pj + 8; ++j) {
			if (change_color) { 
				if (p->chess_board[i][j] != 'B') 
					++re_value;
			}else{              
				if (p->chess_board[i][j] != 'W')
					++re_value;
			}change_color=!change_color;
		}change_color=!change_color;
	}return re_value;
}
void Min_count(P_Chess p) {
	int count1, count2;
	for (int i = 0 ; i <= p->n - 8; ++i) {   
		count1 = 0; count2 = 0;
		for (int j = 0; j <= p->m - 8; ++j){ 
			count1 = Return_Count(p, i, j,true);   // 브루트포스 이기 때문에 W B의 시작을 바꿔서
 			count2 = Return_Count(p, i, j, false); // 모든 경우의 수를 확인
			int count = (count1 > count2) ? count2 : count1;
			if (count < p->min)
				p->min = count;
		}
	}
}
int main() {  //black = 4 white = 4
	Chess c;
	Input(&c);
	Min_count(&c);
	cout << c.min;
	return 0;
}
/* problem explanation
체스판은 검은색과 흰색이 번갈아서 칠해져 있어야 한다. 
구체적으로, 각 칸이 검은색과 흰색 중 하나로 색칠되어 있고, 변을 공유하는 두 개의 사각형은 다른 색으로 칠해져 있어야 한다. 따라서 이 정의를 따르면 체스판을 색칠하는 경우는 두 가지뿐이다.
하나는 맨 왼쪽 위 칸이 흰색인 경우, 하나는 검은색인 경우이다.
보드가 체스판처럼 칠해져 있다는 보장이 없어서, 
지민이는 8×8 크기의 체스판으로 잘라낸 후에 몇 개의 정사각형을 다시 칠해야겠다고 생각했다.
당연히 8*8 크기는 아무데서나 골라도 된다.
지민이가 다시 칠해야 하는 정사각형의 최소 개수를 구하는 프로그램을 작성하시오.
-input-
첫째 줄에 N과 M이 주어진다. N과 M은 8보다 크거나 같고, 50보다 작거나 같은 자연수이다.
둘째 줄부터 N개의 줄에는 보드의 각 행의 상태가 주어진다. B는 검은색이며, W는 흰색이다.
-output-
첫째 줄에 지민이가 다시 칠해야 하는 정사각형 개수의 최솟값을 출력한다
 */