#include<stdio.h>
#include<conio.h>

main()
{
//	2. Write C Program to perform a swapping of two variables without using third variable.
	int a,b,c;
	printf("Enter The Value A :");
	scanf("%d",&a);
	printf("Enter The Value B :");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	printf("A : %d\n",a);
	printf("B : %d",b);
}