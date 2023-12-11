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
		sum=sum+a[i];
	}
	int num=sum+10;
	printf("\n");
	int s=0;
	for(i=0; i<num; i++)
	{
		for(j=0; j<l; j++)
		{
			if(a[j]==s)
			{
				printf("%d ",s);
			}
		}s++;
	}
}