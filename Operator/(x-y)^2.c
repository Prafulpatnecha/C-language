#include<stdio.h>
#include<conio.h>

main()
{
//	2.WAP to find a the answer given formula (x-y)2.
//	(x-y)^2 = (x^2-2xy+y^2)
	int x,y,a;
	printf("x :");
	scanf("%d",&x);
	
	printf("y :");
	scanf("%d",&y);
	
	a=x*x-(2*x*y)+y*y;
	printf("(x-y)^2 =%d",a);
}