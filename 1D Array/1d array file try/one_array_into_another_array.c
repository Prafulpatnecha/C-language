#include<stdio.h>
#include<conio.h>

void main()
{
//	4. WAP to print the multiplication table of each element of the array.

	int n;
	printf("Enter The Value Array Size Of N : ");
	scanf("%d",&n);
	int i,a[n],j,b[n];
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Array Of A[%d] : ",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0; i<n; i++)
	{
		printf("Array Of B[%d] : %d\n",i,b[i]);
	}
}	