#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int data;
	struct Node* left;
	struct Node* right;
}Node;

struct Node* root;

void Init()
{
	root = (Node*)malloc(sizeof(Node));
	root = NULL;
}

Node* Search(Node* root, int data)
{
	Node* node = root;
	while (node != NULL)
	{
		if (data > node->data)
		{
			node = node->right;
		}
		else if (data < node->data)
		{
			node = node->left;
		}
		else if (data == node->data)
		{
			printf("값을 찾았습니다\n");
			return node->data;
		}
	}
	printf("값을 찾을 수 없습니다.\n");
	return NULL;
}

Node* insert(Node* root, int data)
{
	Node* parent = NULL;
	Node* node = root;

	while (node != NULL)
	{
		parent = node;
		if(data == node->data)
		{
			printf("같은 값이 존재\n");
			return node;
		}
		else if(data > node->data)
		{
			node = node->right;
		}
		else 
		{
			node = node->left;
		}
	}

	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->left = newnode->right == NULL;

	if (node != NULL)
	{
		if (data < parent->data)
		{
			parent->left = newnode;
		}
		else
		{
			parent->right = newnode;
		}
		
	}
	else
	{

	}
	
}




int main(void)
{
	Init(); 

}