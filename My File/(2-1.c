#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,a;
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
		for(a=2; a<=5; a++)
		{
			for(k=1; k<=a; k++)
			{
				printf("%d",k);
			}
			printf("\n");
		}
}