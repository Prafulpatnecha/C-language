#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,a;
		for(j=1; j<=5; j++)
		{
			for(i=1; i<=j; i++)
			{
				printf("%d",i);
			}
			for(a=j; a<5; a++)
			{
				printf("  ");
			}
			for(k=j; k>=1; k--)
			{
				printf("%d",k);
			}
			printf("\n");
		}
}