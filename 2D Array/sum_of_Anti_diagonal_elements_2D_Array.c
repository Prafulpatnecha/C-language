#include<stdio.h>
#include<conio.h>

void main()
{
	int row;
	
	printf("Enter The Value Of Size (Row) & (Column) 2D Array : ");
	scanf("%d",&row);
	
	int a[row][row],i,j=row;
	
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
		j--;
		sum=sum + a[i][j];
	}
		printf("\nThe sum of Anti diagonal elements of an Array : %d ",sum);
}