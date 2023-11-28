#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,k;
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			if(j%2)
			{
				printf("-");
			}
			else
			{
				printf("|");
			}
		}
		printf("\n");
	}
}