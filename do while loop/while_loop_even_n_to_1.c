#include<stdio.h>
#include<conio.h>

void main()
{
	int a=2;
	int n;
	
	printf("Enter The Value N : ");
	scanf("%d",&n);
	while(n>=a)
	{
	
		printf("%d ",n);
		n-=2;
	}
}