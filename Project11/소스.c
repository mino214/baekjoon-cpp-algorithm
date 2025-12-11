#include<stdio.h>
#include<stdlib.h>

#define MAX_SIZE 5

typedef int element;

typedef struct Node
{
	int data;
	struct Node* next;
}Node;

struct Node* head;

Node* insert(Node* node, int data)
{
	printf("insert : %d \n", data);
	Node* newnode = NULL;
	newnode = (Node*)malloc(sizeof(Node));
	node->data = data;
	node->next = newnode;
	newnode->next = NULL;
	node = newnode;
	return node;
}


void Print()
{
	Node* node = head->next;
	while (node->next != NULL)
	{
		printf("%d -> ", node->data);
		node = node->next;
	}
	printf("\n");
}

int main(void)
{
	head = (Node*)malloc(sizeof(Node));
	Node* node = NULL;
	node = (Node*)malloc(sizeof(Node));
	head->next = node;

	node = insert(node, 10);
	Print();
	node = insert(node, 20);
	Print();
	node = insert(node, 30);
	Print();
	node = insert(node, 40);
	Print();

	free(head);
	free(node);
}