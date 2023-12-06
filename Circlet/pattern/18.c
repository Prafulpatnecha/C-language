#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	int a;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(a=i; a<5; a++)
		{
			printf("  ");
		}
		for(int k=i; k>=1; k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}
}