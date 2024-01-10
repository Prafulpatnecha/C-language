#include<stdio.h>
#include<conio.h>
#include<string.h>

void arr()
{
	int j,n,i;
	printf("Enter Size of Array : ");
	scanf("%d",&n);
	int b[n][n];
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("Enter The Value Of Array[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	array(n,b);
}

int array(int n,int a[n][n])
{
	int i,j;
	int *ptr;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			ptr=&a[i][j];
			*ptr=*ptr*(*ptr)*(*ptr);
			printf("%d ",*ptr);
		}
		printf("\n");
	}
	// return a;
}

void main()
{
	arr();
}
// Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
// For example,
// Input:
// Enter array's size: 2

// Enter array elements:
// a[0][0] = 3
// a[0][1] = 2
// a[1][0] = 5
// a[1][1] = 4

// Output:
// Cubes of all elements:
// 9   4
// 25 64