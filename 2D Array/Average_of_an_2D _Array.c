#include<stdio.h>
#include<conio.h>

void main()
{
	int row,column;
	
	printf("Enter The Value Of Size (Row) 2D Array : ");
	scanf("%d",&row);
	printf("Enter The Value Of Size (Column) 2D Array : ");
	scanf("%d",&column);
	
	int i,j,a[row][column];
	float sum;
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("Enter The Value A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum=sum+a[i][j];
		}
	}
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",a[i][j]);
		}printf("\n");
	}
	sum=sum/(row*column);
	printf("\nAverage of an Array : %.2f",sum);
	
}