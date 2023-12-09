#include<stdio.h>
#include<conio.h>

void main()
{
	int row,column;
	
	printf("Enter The Value Of Size (Row) 2D Array : ");
	scanf("%d",&row);
	printf("Enter The Value Of Size (Column) 2D Array : ");
	scanf("%d",&column);
	
		
	int i,j,a[row][column],b[row][column],c[row][column];
	
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
			
			printf("Enter The Value B[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	printf("\nArray C is : \n");
	for(i=0; i<row; i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",c[i][j]);
		}printf("\n");
	}
}