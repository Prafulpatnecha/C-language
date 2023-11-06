#include<stdio.h>
#include<conio.h>

main()
{
//	ternary 3 varible find for maximum.
	int a,b,c;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("a is maximum"): printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}