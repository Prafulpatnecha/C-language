#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	int a;
	for(j=5; j>=2; j--)
	{
		for(i=1; i<=j; i++)
		{
			printf("%d",i);
		}
		for(a=j; a<5; a++)
		{
			printf("  ");
		}
		for(int k=j; k>=1; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(a=i; a<5; a++)
		{
			printf("  ");
		}
		for(int k=i; k>=1; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}