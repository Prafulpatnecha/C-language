#include<stdio.h>
#include<conio.h>

main()
{
	int l;
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	int i,j,s=0;
	int a[l];
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	int o=l;
	for(i=0; i<=l-1; i++)
	{
		o--;
		s=a[n];
		printf("%d ",s);
	}
}