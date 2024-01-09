#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int x,y;
	printf("Enter The Value of X : ");
	scanf("%d",&x);
	printf("Enter The Value of Y : ");
	scanf("%d",&y);

	int *ptr=&x;
	int *ptr1=&y;

	// x=x+y;
	// y=x-y;
	// x=x-y;
	*ptr=*ptr+*ptr1;
	*ptr1=*ptr-*ptr1;
	*ptr=*ptr-*ptr1;
	printf("%d\n",*ptr);
	printf("%d",*ptr1);
}
// Q.2 Write a Program to swap two variables using Pointers.
// For example,
// Input:
// Enter the value of x: 5
// Enter the value of y: 3

// Output:
// Before swapping:
// x: 5
// y: 3

// After swapping:
// x: 3
// y: 5