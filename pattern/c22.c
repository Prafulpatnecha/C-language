#include<stdio.h>
#include<conio.h>

void main()
{
	char i,j,k='A';
	for(i=1; i<=5; i++)
	{
		for(j=i; j>=1; j--)
		{
			printf("%c ",k);
			k++;
		}
		printf("\n");
	}
}