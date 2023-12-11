#include<stdio.h>
#include<conio.h>

main()
{
	int t,l,sum;
	int a[]={1,2,3,4,5,6,7,8,9,10};
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&t);
	
	int i,j;
	printf("\n");
	for(i=0; i<10; i++)
	{
		for(j=i+1; j<10; j++)
		{
			if(a[i]+a[j]==t)
			{
				printf("%d,%d\n",a[i],a[j]);
			}
		}
	}
}