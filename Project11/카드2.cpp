#include<iostream> //linked list node
using namespace std;
typedef struct Node {
	int data;
	Node* next;
	Node* pre;
}*P_Node;
typedef struct List_Node {
	Node* head;
	Node* tail;
	List_Node() {
		head = new Node;
		tail = new Node;
		Node* node = new Node;
		node->data = 1;
		head->next = node;
		node->next = tail;
		tail->pre = node;
		node->pre = head;
	}
}*P_List_Node;
void Insert(P_List_Node p, int n) {
	for (int i = 2; i <=n; ++i) {
		Node* new_node = new Node;  // new node
		Node* temp = p->tail->pre; // front value;
		new_node->data = i;          // input data;
		p->tail->pre = new_node;
		new_node->next = p->tail;
		temp->next = new_node;
	}
}
int Pop(P_List_Node p,int size) {
	if (size == 1)
		return 1;
	else if (size <= 2)
		return p->tail->pre->data;
	Node* node_h  = p->head->next; // 삭제
	Node* node_h2 = node_h->next;  // 맨 끝으로 감
	Node* node_h3 = node_h2->next; // 맨 앞으로 
	Node* node_t  = p->tail->pre;  // 뒤에서 2번째
	p->head->next = node_h3;
	node_h3->pre = p->head;
	node_h2->next = p->tail;
	p->tail->pre = node_h2;
	node_t->next = node_h2;
	return 0;
}
int main() {
	int n,size; List_Node node;
	cin >> n;
	Insert(&node,n);
	size = n;
	while (true) {
		int out = Pop(&node,size);	
		if (out != 0) {
			cout << out;
			break;}
		--size;
	}
	return 0;
}
/*
* 이제 다음과 같은 동작을 카드가 한 장 남을 때까지 반복하게 된다. 
우선, 제일 위에 있는 카드를 바닥에 버린다. 
그 다음, 제일 위에 있는 카드를 제일 아래에 있는 카드 밑으로 옮긴다.
*/
/* queue 사용
#include <iostream>
#include <queue>
using namespace std;
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	queue<int> que;
	int N;
	cin >> N;
	for (int i = 1; i <= N; i++)
		que.push(i);
	while (que.size() != 1) {
		que.pop();
		que.push(que.front());
		que.pop();
	}
	cout << que.front();
	return 0;
}
*/