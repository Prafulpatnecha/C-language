#include<stdio.h>
#include<conio.h>

void main()
{	
	int a[5][5],i,j;
	int sum=0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Enter The Value A[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(j==0 && i==0 || i==0 || j==0 || i==4 || j==4)
			{
				printf("%d ",a[i][j]);
				sum=sum+a[i][j];
			}
			else
			{
				printf("  ");
			}
		}printf("\n");
	}
	
		printf("\nThe sum of boundary elements of an 2D Array : %d ",sum);
}