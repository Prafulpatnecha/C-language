#include<stdio.h>
#include<conio.h>

main()
{
	int l,sum;
	printf("Enter The Value Of Size 1D Array :");
	scanf("%d",&l);
	int i,j;
	int a[l][l];
	for(i=0; i<l; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("Enter The Value Array[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<l; i++)
	{
		for(j=0; j<l; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<l; i++)
	{
		sum=sum+a[i][i];
	}
	printf("\ndiagonal : %d ",sum);
}