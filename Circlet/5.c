#include<stdio.h>
#include<conio.h>

main()
{
//Q.5 Write a Program to print the below pattern using nested for loop.
//1                 1
//1 2             2 1
//1 2 3         3 2 1
//1 2 3 4     4 3 2 1
//1 2 3 4 5 5 4 3 2 1
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		for(int k=i; k<5; k++)
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