#include<stdio.h>
#include<conio.h>
#include<string.h>

int fcatorial(int n)
{
	if(n==1)
	{
		return 1;
	}
	return n*fcatorial(n-1);
}

int fcatorialInput()
{
	int a;
	printf("Enter The Value Of N :");
	scanf("%d",&a);	
	return fcatorial(a);
}

void main()
{
	printf("%d",fcatorialInput());
}