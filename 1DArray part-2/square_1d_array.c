#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	int i,a[n];
	int sq[n];
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		sq[i]=a[i]*a[i];
		printf("Array [%d] : %d\n",i,sq[i]);
	}
	
}
//Q.3 Write a Program to find square of each element from the given array.
//For example,
//Input:
//Enter array size: 5
//
//Enter array elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//Output:
//The squares are: 49, 16, 81, 25, 4