#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int l=sizeof(a)/sizeof(a[0]);
	int n,i=1,j,ck=0;
	printf("Enter The Value of 1,2,3,4,5,6,7,8,9,10 : ");
	scanf("%d",&n);
	
	for(i=0; i<l; i++)
	{
		ck=0;
		for(j=0; j<l; j++)
		{
			if(a[j]==n)
			{
				ck=1;
			}
			if(ck==1)
			{
				a[j]=a[j+1];
			}
		}
	}
	l=l-1;
	for(i=0; i<l; i++)
	{
		printf("%d ",a[i]);
	}
}