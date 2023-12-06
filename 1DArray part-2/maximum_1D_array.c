#include<stdio.h>
#include<conio.h>

void main()
{
	int i,a[4];
	for(i=0; i<4; i++)
	{
		printf("Enter The Value A[%d] : ",i);
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1] && a[0]>a[2] && a[0]>a[3])
	{
		printf("A[0] is Maximum");
	}
	else if(a[1]>a[0] && a[1]>a[2] && a[1]>a[3])
	{
		printf("A[1] is Maximum");
	}
	else if(a[2]>a[1] && a[2]>a[0] && a[2]>a[3])
	{
		printf("A[2] is Maximum");
	}
	else if(a[3]>a[1] && a[3]>a[2] && a[3]>a[0])
	{
		printf("A[3] is Maximum");
	}
}