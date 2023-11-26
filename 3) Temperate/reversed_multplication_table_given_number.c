#include<stdio.h>
#include<conio.h>

main()
{
//	 wap to print reversed multplication table of given number.
	int a,b,m;
	printf("Enter The value Of N : ");
	scanf("%d",&m);
	for(a=10; a>=1; a--)
	{
		b=m*a;
		printf("%d ",b);
	}
}