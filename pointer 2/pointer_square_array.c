#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int a,i;
	printf("Enter The Size Of Array : ");
	scanf("%d",&a);
	int b[a];
	int *ptr;
	for(i=0; i<a; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<a; i++)
	{
		ptr=&b[i];
		*ptr=*ptr*(*ptr);
		printf("%d\n",*ptr);
	}
}
// Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
// For example,
// Input:
// Enter the array's size: 5

// Enter array's elements:
// a[0] = 2
// a[1] = 4
// a[2] = 1
// a[3] = 3
// a[4] = 7

// Output:
// Square of each element:
// 4, 16, 1, 9, 49