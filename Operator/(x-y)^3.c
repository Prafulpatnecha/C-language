#include<stdio.h>
#include<conio.h>

main()
{
//	4.WAP to find a the answer given formula (x-y)^3.
//	(x-y)^3 = x^3 - 3x^2y + 3xy^2 - y^3
	int x,y,a;
	printf("x :");
	scanf("%d",&x);
	
	printf("y :");
	scanf("%d",&y);
	
	a=(x*x*x)-(3*x*x*y)+(3*x*y*y)-(y*y*y);
	printf("(x-y)^3 = %d",a);
}