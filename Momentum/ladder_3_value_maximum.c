#include<stdio.h>
#include<conio.h>

main()
{
	//3 number maximum find with Ladder
	//a,b,c Three variable 
	
	int a,b,c;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("a is maximum");
	}
	else if(b>a && b>c)
	{
		printf("b is maximum");
	}
	else if(c>a && c>b)
	{
		printf("c is maximum");
	}
}