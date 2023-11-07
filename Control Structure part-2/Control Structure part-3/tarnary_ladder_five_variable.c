//#include<stdio.h>
//#include<conio.h>

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
	
	(a>b && a>c && a>d && a>e)?printf("a is maximum"):
	(b>a && b>c && b>d && b>e)?printf("b is maximum"):
	(c>b && c>a && c>d && c>e)?printf("c is maximum"):
	(d>b && d>c && d>a && d>e)?printf("d is maximum"):
	(e>b && e>c && e>d && e>a)?printf("e is maximum"):printf("a is maximum");
}