#include<stdio.h>
#include<conio.h>
#include<string.h>

int sum(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n+sum(n-1);
}

int sumInput()
{
	int a;
	printf("Enter The Value Of N :");
	scanf("%d",&a);	
	return sum(a);
}

void main()
{
	printf("%d",sumInput());
}