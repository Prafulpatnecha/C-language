#include<stdio.h>
#include<conio.h>

main()
{
	//3 number minimum find with nested if,else
	//a,b,c Three variable 
	
	int a,b,c;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	
	if(a<b && a<c)
	{
		printf("a is minimum");
	}
	else if(b<a && b<c)
	{
		printf("b is minimum");
	}
	else if(c<a && c<b)
	{
		printf("c is minimum");
	}
}