#include<stdio.h>
#include<conio.h>

main()
{
	int l,sum;
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	int a[l+10];
	
	int i,j;
	for(i=0; i<l; i++)
	{
		printf("Enter The Value Of Array : ");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	int num=10+sum;
	int s=num;
	printf("\n");
	
	for(i=0; i<num; i++)
	{
		for(j=0; j<l; j++)
		{
			if(a[j]==s)
			{
				printf("%d ",s);
			}
		}s--;
	}
}