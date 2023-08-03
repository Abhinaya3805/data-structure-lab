#include<stdio.h>
#define MAXSIZE 5
int queue[MAXSIZE];
int front=-1,rear=-1;
void enqueue(int data)
{
	if(rear==MAXSIZE-1)
	{
		printf("queue is full");
		return;
	}
	if(front==-1)front=0;
	rear++;
	queue[rear]=data;
}
void dequeue()
{
	if(front==-1)
	{
		printf("queque is empty");
		return;
	}
	printf("removed %d from queue",queue[front]);
	front++;
	if(front>rear)front=rear=-1;
}
void display()
{
	if(front==-1)
	{
		printf("queue is empty");
		return ;
	}
	printf("queue elements are");
	for(int i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
	printf("\n");
}
int main()
{
	enqueue(1);
	enqueue(2);
	enqueue(3);
	enqueue(4);
	enqueue(5);
	enqueue(6);
	display();
	dequeue();
	dequeue();
	display();
	return 0;
}