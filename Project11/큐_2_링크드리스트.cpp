#include<iostream>
using namespace std;
typedef struct Node {
	int data;
	Node* pre;
	Node* next;
}*P_Node;
typedef struct Node_List {
	Node* head;
	Node* tail;
	Node_List() {
		head = new Node;
		head->data = NULL;
		tail = new Node;
		tail->data = NULL;
		head->next = tail;
		tail->pre = head;
	}
}*P_Node_List;
int Empty(P_Node_List p) { // empty
	return (p->head->next == p->tail) ? 1 : 0;
}
int Size(P_Node_List p) { //size
	int count = 0;
	for (auto i = p->head->next; i != p->tail; i = i->next)
		++count;
	return count;
}
void Push_Front(P_Node_List p, int number){
	Node* new_node = new Node;
	Node* n_node = p->head->next;
	new_node->data = number;
	p->head->next = new_node;
	new_node->pre = p->head;
	if (Empty(p) == 1) {	
		p->tail->pre = new_node;
		new_node->next = p->tail;}
	else {	
		new_node->next = n_node;
		n_node->pre = new_node;}
}
int Pop(P_Node_List p) {
	Node* node = p->head->next;
	int number = node->data;
	if (Size(p) == 0)
		return -1;
	else if (Size(p) == 1) {
		p->head->next = p->tail;
		p->tail->pre = p->head;
		delete node;
	}
	else {
		Node* _node = node->next;
		p->head->next = _node;
		_node->pre = p->head;
		delete node;
	}
	return number;
}
int Front(P_Node_List p) { // front
	Node* node = p->tail->pre;
	return (node == p->head) ? -1 : node->data;	
}
int Back(P_Node_List p) { // back

	Node* node = p->head->next;
	return (node == p->tail) ? -1 : node->data;
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	Node_List nl;
	int n;
	string input;
	cin >> n;
	for (int i = 0 ; i < n; ++i) {
		cin >> input;
		if (input.compare("push") == 0) {
			int num; cin >> num;
			Push_Front(&nl, num);
		}
		else if (input.compare("pop") == 0)
			cout << Pop(&nl) << "\n";
		else if (input.compare("size") == 0)
			cout << Size(&nl) << "\n";
		else if (input.compare("empty") == 0)
			cout << Empty(&nl) << "\n";
		else if (input.compare("front") == 0)
			cout << Front(&nl)<<"\n";
		else if (input.compare("back") == 0)
			cout << Back(&nl)<<"\n";
	}
	return 0;
}
/*
* push X: 정수 X를 큐에 넣는 연산이다.
pop: 큐에서 가장 앞에 있는 정수를 빼고, 그 수를 출력한다. 
만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
size: 큐에 들어있는 정수의 개수를 출력한다.
empty: 큐가 비어있으면 1, 아니면 0을 출력한다.
front: 큐의 가장 앞에 있는 정수를 출력한다.
만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
back: 큐의 가장 뒤에 있는 정수를 출력한다. 
만약 큐에 들어있는 정수가 없는 경우에는 -1을 출력한다.
*/