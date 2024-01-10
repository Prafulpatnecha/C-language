#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[50];
    printf("String Character : ");
    gets(a);
	int len=strlen(a);
	int *ptr=&len;
	printf("The length of a string is : %d\n",ptr);
	printf("The length of a string is : %d",*ptr);
}
// Q.1 Write a Program to find the length of a string using a Pointer.
// For example,
// Input:
// Enter any string: hello world

// Output:
// The length of a string is: 11