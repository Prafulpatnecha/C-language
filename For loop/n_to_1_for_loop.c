#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	for(int a=1; n>=a; n--)
	{
		printf("%d ",n);
	}
}