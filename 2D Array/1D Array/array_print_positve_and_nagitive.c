#include<stdio.h>
#include<conio.h>

void main()
{
	int n,s=0;
	
	printf("Enter The Size Of array : ");
	scanf("%d",&n);
	
	int i,j,a[n+10],sum;
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
		sum= sum + a[i];
	}
	
	int num= n+10+sum;
	
		for(j=0; j<n; j++)
		{
			if(a[j]>0)
			{
				printf("Positive Value : %d ",a[j]);
			}
			else
			{
				printf("Negitive Value : %d ",a[j]);
			}
		}
}