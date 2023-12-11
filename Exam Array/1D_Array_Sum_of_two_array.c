#include<stdio.h>
#include<conio.h>

main()
{
	int l,sum;
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	int a[l+10],b[l+10],c[l+10];
	
	int i,j;
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Of Array A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Of Array B[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<l; i++)
	{
		sum=a[i]+b[i];
		printf("%d ",sum);
	}
}