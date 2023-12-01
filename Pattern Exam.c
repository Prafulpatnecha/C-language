#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,a,k;
	printf("    1\n");
		for(i=2; i<=5; i++)
		{	
			for(a=i; a<5; a++)
			{
				printf(" ");
			}		
			for(j=1; j<i; j++)
			{
				printf("%d",j);
			}
			for(k=i; k>=2; k--)
			{
				printf("%d",k);
			}
			for(int n=1; n<=1; n++ )
			{
				printf("%d",n);
			}
			printf("\n");
		}
}