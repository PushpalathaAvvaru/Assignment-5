#include<stdio.h>
#include<string.h>

#define MAX 20
int top = -1;
char stack[MAX];
char push(char);
char pop();

main()
{
	char str[20];
	int i;
	printf("Enter the string : " );
	gets(str);
	for(i=0;i<strlen(str);i++)
		push(str[i]);
	for(i=0;i<strlen(str);i++)
		str[i]=pop();
	printf("Reversed string is : ");
	puts(str);
}
char push(char x)
{
	if(top == (MAX-1))
		printf("Stack is full\n");
	else
		stack[++top] =x;
}
char pop()
{
	if(top == -1)
		printf("Stack is empty\n");
	else
		return stack[top--];
}
