#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node* pre;
	struct Node* next;
}Node;

struct Node* head;
struct Node* tail;

void init()
{
	head = (Node*)malloc(sizeof(Node));
	tail = (Node*)malloc(sizeof(Node));
	head->data = 0;
	tail->data = 0;
	head->next = tail;
	head->pre = NULL;
	tail->next = NULL;
	tail->pre = head;
}

void front_insert(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
    node->data = data; // node에 값을 삽입

	if (head->next == tail) // 처음 값을 집어 넣을 때
	{
		head->next = node;
		node->pre = head;
		tail->pre = node;
		node->next = tail;
		return;
	}

	Node* p;
	p = head->next;

	head->next = node; // 헤드의 다음 값을 노드로 설정
	node->pre = head; //노드의 이전 값을 헤드로 설정

	node->next = p; // 노드의 다음 값을 p로 설정
	p->pre = node; 

}
void tail_insert(int data)
{
	Node* node = (Node*)malloc(sizeof(Node));
	node->data = data; // node에 값을 삽입
	if (head->next == tail)
	{
		head->next = node;
		node->pre = head;
		tail->pre = node;
		node->next = tail;
		return;
	}
	Node* p;
	p = tail->pre;

	node->next = tail;
	tail->pre = node;

	node->pre = p;
	p->next = node;

}


void front_Print()
{
	printf("정방향 출력 : head -> ");
	Node* node = head->next;
	while (node != tail)
	{
		printf("%d -> ", node->data);
		node = node->next;
	}
	printf("tail\n");

}

void tail_Print()
{
	printf("역방향 출력 : ");
	Node* node = tail->pre;
	while (node != head)
	{
		printf("%d -> ", node->data);
		node = node->pre;
	}
	printf("\n");
}

void delete_all()
{
	Node* node = head->next;
	Node* temp;
	while (node != tail)
	{
		temp = node->next;
		free(node);
		node = temp;
	}
	head->next = tail;
	tail->pre = head;
}


int main(void)
{
	init();
	front_insert(10);
	front_Print();

	tail_insert(40); 
	front_Print();
	//tail_Print();

	front_insert(20);
	front_Print();

	tail_insert(50);
	front_Print();
	//tail_Print();

	front_insert(30);
	front_Print();

	tail_insert(60);
	front_Print();
	//tail_Print();

	delete_all();
	front_Print();

	free(head);
	free(tail);
}