#include<stdio.h>
#include<conio.h>

void main()
{
//	ternary 5 varible find for maximum.
	int a,b,c,d,e;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);
	
	(a>b)?(a>c)?(a>d)?(a>e)?printf("a is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("d is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(b>c)?(b>d)?(b>e)?printf("b is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum"):(c>d)?(c>e)?printf("c is maximum"):printf("e is maximum"):(d>e)?printf("d is maximum"):printf("e is maximum");
}