#include<stdio.h>
int main()
{
	int num,fact=1,i;
	printf("enter a number");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	printf("factorial of %d is %d",num,fact);
	return 0;
}