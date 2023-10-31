#include<stdio.h>
#include<conio.h>

main()
{
//	5.WAP to find a the answer given formula (x+y+z)^3.
//	(x+y+z)^3 = x^3 + y^3 + z^3 + 3x^2y + 3x^2z + 3xy^2 + 3y^2z + 3xz^2 + 3yz^2 + 6xyz
	int x,y,a,z;
	printf("x :");
	scanf("%d",&x);
	
	printf("y :");
	scanf("%d",&y);
	
	printf("z :");
	scanf("%d",&z);
	
	a=(x*x*x)+(y*y*y)+(z*z*z)+(3*x*x*y)+(3*x*x*z)+(3*x*y*y)+(3*y*y*z)+(3*x*z*z)+(3*y*z*z)+(6*x*y*z);
	printf("(x+y+z)^3 = %d",a);
}