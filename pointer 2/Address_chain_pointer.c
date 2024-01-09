// q4. wap to find the address of the chain pointer.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int a;
	printf("Enter The Value Of Any : ");
	scanf("%d",&a);

	int *ptr1=&a;
	int **ptr2=&ptr1;
	int ***ptr3=&ptr2;
	printf("Pointer : %d",***ptr3);

}