#include<stdio.h>
#include<conio.h>

main()
{
//	2. Write C Program to perform a swapping of two variables without using third variable.
	int a,b;
	printf("Enter The Value A :");
	scanf("%d",&a);
	printf("Enter The Value B :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("A is maximum");
	}
	else
	{
		printf("B is maximum");
	}
}