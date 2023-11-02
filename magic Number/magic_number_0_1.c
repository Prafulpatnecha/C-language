#include<stdio.h>

main()
{
	//magic number 123;
	int d;
	printf("Enter the value :");
	scanf("%d",&d);
	int a,b;
	int x,y,z;
	x=d%10;
	a=d/10;
	y=a%10;
	b=a/10;
//	z=b%10;
	printf("%d\n",x);
	printf("%d\n",a);
	printf("%d\n",y);
	printf("%d\n",b);
//	printf("%d\n",z);
	printf("%d",(x*y*b)==(x+y+b));
//	output->1;
}