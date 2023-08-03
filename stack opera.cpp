#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE-1];
int top =-1;
void push(int item)
{
	if(top==MAX_SIZE-1)
	{
	printf("stack is full");
	return;
    }
    stack[++top]=item;
}
int pop()
{
	if(top==-1)
	{
		printf("stack is empty");
		return -1;
	}
	return stack[top--];
}
int peek()
{
	if(top==-1)
	{
	printf("stack is empty");
	return-1;
    }
    return stack[top];
}
int main()
{
	push(1);
	push(2);
	push(3);
	printf("%d\n",pop());
	printf("%d\n",peek());
	printf("%d\n",pop());
	printf("%d\n",pop());
	printf("%d\n",pop());
	return 0;
}