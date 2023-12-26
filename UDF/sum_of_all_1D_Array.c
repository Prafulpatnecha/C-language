#include<stdio.h>
#include<conio.h>
#include<string.h>

void SumArray(int x)
{
	int a[x];
	int i,sum;
	for(i=0; i<x; i++)
	{
		printf("Arrar[%d] : ",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n");
	for(i=0; i<x; i++)
	{
		printf("Array[%d] : %d\n",i,a[i]);
	}
	printf("\nSum Of Array : %d",sum);
}
void inputArray()
{
	int n;
	printf("Enter The Size Of Array : ");
	scanf("%d",&n);
	SumArray(n);
}

void main()
{
	inputArray();
}
//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
//For example,
//Input:
//Enter array size: 5
//Enter array elements:
//a[0] = 6
//a[1] = 4
//a[2] = 1
//a[3] = 5
//a[4] = 2
//
//Output:
//The sum of an Array: 18