#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter The Value Array Size Of N : ");
	scanf("%d",&n);
	int i,a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("Array[%d] : %d\n",i,a[i]);
	}
}