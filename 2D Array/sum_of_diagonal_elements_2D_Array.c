#include<stdio.h>
#include<conio.h>

void main()
{
	int row;
	
	printf("Enter The Value Of Size (Row) & (Column) 2D Array : ");
	scanf("%d",&row);
	
	int a[row][row],i,j;
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<row; j++)
		{
			printf("Enter The Value A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}printf("\n");
	}
	
	int sum;
	for(i=0; i<row; i++)
	{
		sum=sum + a[i][i];
	}
		printf("\nThe sum of diagonal elements of an Array : %d ",sum);
}