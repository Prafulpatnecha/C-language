#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	//n declaration.
	printf("Enter The Size Of 1D array :");
	scanf("%d",&n);
	//asin n for Array.
	int array[n];
	//n time for loop swap.
	for(int i; i<n; i++)
	{
		//array run and Reppet for n time.
		printf("Enter The Value Of array[%d] :",i);
		scanf("%d",&array[i]);
	}
	//input declare first loop.
	for(int i; i<n; i++)
	{
		//array run and Reppet for n time.
		printf("array[%d] : %d\n",i,array[i]);
	}
//	second loop Output asin.
//	Length find for array.
	printf("Length of an Array : %d",n);
}
//Q.1 Write a Program to find the length of a 1D array.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 3
//a[1] = 7
//a[2] = 1
//a[3] = 8
//a[4] = 6
//
//Output:
//Length of an Array: 5