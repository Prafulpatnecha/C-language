#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,n,f;
	
	printf("Enter The Value N : ");
	scanf("%d",&n);
	while(a<=10)
	{
		
		f=n*a;
		printf("%d ",f);
		a++;
	}
}