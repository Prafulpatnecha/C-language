#include<stdio.h>
#include<conio.h>

void main()
{
//	4. WAP to print the multiplication table of each element of the array.

	int n;
	printf("Enter The Value Array Size Of N : ");
	scanf("%d",&n);
	int i,a[n],j;
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1; i>=0; i--)
	{
		printf("array[%d] : %d\n",i,a[i]);
	}
}