#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
		for(j=1; j<=5; j++)
		{
			for(i=1; i<=j; i++)
			{
				printf("%d",i);
			}
			printf("\n");
		}
		for(i=4; i>=1; i--)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
}