#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	int a;
	for(i=1; i<=5; i++)
	{
		for(a=i; a<5; a++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(j=2; j<=5; j++)
	{
		for(a=1; a<j; a++)
		{
			printf(" ");
		}
		for(i=j; i<=5; i++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}