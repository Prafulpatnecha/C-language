#include<stdio.h>
#include<conio.h>

main()
{
//	5.WAP to find a the answer given formula (x+y+z)^2.
//	(x+y+z)^2 = x^2 + y^2 + z^2 +2xy + 2xz + 2yz 
	int x,y,a,z;
	printf("x :");
	scanf("%d",&x);
	
	printf("y :");
	scanf("%d",&y);
	
	printf("z :");
	scanf("%d",&z);
	
	a=(x*x)+(y*y)+(z*z)+(2*x*y)+(2*x*z)+(2*y*z);
	printf("(x+y+z)^2 = %d",a);
}