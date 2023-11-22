#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	for(int a=0; n>=a; n-=2)
	{
		printf("%d ",n);
	}
}