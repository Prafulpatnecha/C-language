#include<stdio.h>
#include<conio.h>

main()
{
	int l,sum=0;
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
	int s=l;
	for(i=0; i<l; i++)
	{
		s--;
		sum=sum+a[i][s];
	}
	printf("\nAnti diagonal : %d ",sum);
}