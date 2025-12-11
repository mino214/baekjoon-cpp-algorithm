#include<stdio.h>
#include<string.h>

int main(void)
{
	char a[10] = "asdfd";
	char b[10];
	scanf_s("%s",&b,sizeof(b));
	printf("%s", b);
}