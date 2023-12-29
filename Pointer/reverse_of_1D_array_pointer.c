#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int n;
	printf("Enter The value of array size N : ");
	scanf("%d",&n);
	int a[n];

	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter the value array[%d] : ",i);
		scanf("%d",&a[i]);
	}

	int *ptr =&a[n-1];

	for(i=n;i>0;i--)
	{
		printf("%d",*ptr);
		ptr-=1;
		printf("\n");
	}
}
