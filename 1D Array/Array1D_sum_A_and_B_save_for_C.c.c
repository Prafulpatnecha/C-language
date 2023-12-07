#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	
	printf("Enter The Size Of 1D array :");
	scanf("%d",&n);
	
	int a[n];
	int b[n];
	int c[n];
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of a[%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of b[%d] :",i);
		scanf("%d",&b[i]);
		c[i] = a[i]+b[i];
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d] : %d\n",i,a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("b[%d] : %d\n",i,b[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("c[%d] : %d\n",i,c[i]);
	}
}
//Q.3 Write a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.
//For example,
//Input:
//Enter array size: 5
//
//Enter array A's elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//Enter array B's elements:
//b[0] = 1
//b[1] = 3
//b[2] = 1
//b[3] = 7
//b[4] = 3
//
//Output:
//Array C is: 8, 7, 10, 12, 5