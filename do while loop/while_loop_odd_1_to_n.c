#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1;
	int n;
	
	printf("Enter The Value N : ");
	scanf("%d",&n);
	while(a<=n)
	{
	
		printf("%d ",a);
		a+=2;
	}
}