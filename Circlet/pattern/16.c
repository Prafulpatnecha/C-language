#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(j=4; j>=1; j--)
	{
		for(i=j; i>=1; i--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}