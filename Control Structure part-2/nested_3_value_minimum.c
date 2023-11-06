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
	
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("A is minimum");
		}
		else
		{
			//c
			printf("C is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("B is minimum");
		}
		else
		{
			//c
			printf("C is minimum");
		}
	}
}