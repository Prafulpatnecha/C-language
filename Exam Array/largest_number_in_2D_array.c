#include<stdio.h>
#include<conio.h>

main()
{
	int l,sum;
	printf("Enter The Value Of Size 2D Array :");
	scanf("%d",&l);
	int i,j,max=0;
	int a[l][l];
	for(i=0; i<l; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("Enter The Value Array[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0; i<l; i++)
	{
		for(j=0; j<l; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
			}
		}
	}
		printf("%d",max);
}