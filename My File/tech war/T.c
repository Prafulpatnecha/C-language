#include<stdio.h>
#include<conio.h>

void main()
{
	int j,n,i,a[7];
	
	
	for(i=0;i<7;i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("Enter The Value Of Size The Rotate : ");
	scanf("%d",&n);
	for(i=n; i<7; i++)
	{
		printf("%d",a[i]);
	}
	for(j=0; j<n; j++)
	{
		printf("%d",a[j]);
	}
}