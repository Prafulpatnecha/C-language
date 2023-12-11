#include<stdio.h>
#include<conio.h>

void main()
{
	// 1. Write a C program to print all negative elements in an array.
	int row,column;
	
	printf("Enter The Size Of (Row) 2D Array : ");
	scanf("%d",&row);
	printf("Enter The Size Of (column) 2D Array : ");
	scanf("%d",&column);

	int a[row][column],i,j;

	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("Enter The Value A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			if(a[i][j]%2==0)
			{
				printf("Even Number : %d ",a[i][j]);
			}
			else
			{
				printf("Odd Number : %d ",a[i][j]);
			}
		}printf("\n");
	}
}