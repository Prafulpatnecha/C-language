#include<stdio.h>
#include<conio.h>

main()
{
	int a[]={2,7,9,1,3,8,4};
	int l=sizeof(a)/sizeof(a[0]);
//	printf("%d",l);
	int i,j,temp;
	for(i=0; i<l; i++)
	{
		for(j=0; j<l; j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	printf("Second Largest Number : %d ",a[1]);
}