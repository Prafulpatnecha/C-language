#include<stdio.h>
#include<conio.h>

main()
{
//Q.3 Write a Program to print the below pattern using nested for loop.
//        5
//      4 5
//    3 4 5
//  2 3 4 5
//1 2 3 4 5
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(int k=1; k<i; k++)
		{
			printf("  ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}