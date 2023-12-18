#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a,k;
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
			for(k=i-1; k>=1; k--)
			{
				printf("%d",k);
			}
			printf("\n");
		}
}