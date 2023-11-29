#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,a;
		for(i=5; i>=1; i--)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d",j);
			}
			for(a=i; a<5; a++)
			{
				printf("  ");
			}
			for(k=i; k>=1; k--)
			{
				printf("%d",k);
			}
			printf("\n");
		}
		for(j=2; j<=5; j++)
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