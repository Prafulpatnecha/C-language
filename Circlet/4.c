#include<stdio.h>
#include<conio.h>

main()
{
//Q.4 Write a Program to print the below pattern using nested for loop.
//1 0 1 0 1
//  1 0 1 0
//    1 0 1
//      1 0
//        1
	int i,j;
	for(i=5; i>=1; i--)
	{
		for(int k=i; k<5; k++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
}