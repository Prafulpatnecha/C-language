#include<stdio.h>
#include<conio.h>

main()
{
	int l,s=0;
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	int i,j;
	int a[l];
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	int n=l;
	for(i=0; i<=l-1; i++)
	{
		n--;
		s=a[n];
		printf("%d ",s);
	}
}