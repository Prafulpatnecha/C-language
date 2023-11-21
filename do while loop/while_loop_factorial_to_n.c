#include<stdio.h>
#include<conio.h>

void main()
{
	int a=1,sum=1;
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=a*sum;
		a++;
	}
		printf("%d ",sum);
}