#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	
	printf("Enter The Size Of 1D array :");
	scanf("%d",&n);
	
	int array[n];
	float sum;
	for(int i; i<n; i++)
	{
		printf("Enter The Value Of array[%d] :",i);
		scanf("%d",&array[i]);
	}
	
	for(int i; i<n; i++)
	{
		sum = sum+array[i];
		printf("array[%d] : %d\n",i,array[i]);
	}
	sum=sum/n;
	printf("%.1f",sum);
}
//Q.2 Write a Program to find the average of a 1D array.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 12
//a[1] = 42
//a[2] = 18
//a[3] = 50
//a[4] = 26
//
//Output:
//Average of an Array: 29.6