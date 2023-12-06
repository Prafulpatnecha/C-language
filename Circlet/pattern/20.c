#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	int a;
	printf("    *\n");
	for(i=1; i<=3; i++)
	{
		for(a=i; a<4; a++)
		{
			printf(" ");
		}
		for(j=1; j<=1; j++)
		{
			printf("* ");
		}
		for(int c=1; c<i; c++)
		{
			printf("  ");
		}
		for(int k=1; k>=1; k--)
		{
			printf("*");
		}
		printf("\n");
	}
}