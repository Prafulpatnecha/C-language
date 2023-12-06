#include<stdio.h>
#include<conio.h>

main()
{
//Q.7 Write a Program to print the below pattern using nested for loop.
//* * * * *
//*       *
//* * * * *
//*       *
//*       *
	int i,j;
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if(i==1 || i==3 || j==1 || j==5)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}