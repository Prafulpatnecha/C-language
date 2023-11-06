#include<stdio.h>
#include<conio.h>

main()
{
//	ternary 4 varible find for maximum.
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)? printf("a is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum"):(b>c)?(b>d)?printf("b is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum");
}