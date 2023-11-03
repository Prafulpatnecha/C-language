#include<stdio.h>
#include<conio.h>

main()
{
	int age;
	printf("Enter Your Age :");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age>100)
		{
			printf("please Enter 100 under Value!");
		}
		else
		{
			printf("Your Age Is Parfact");
		}
	}
	else
	{
		if(age==0)
		{
			printf("0 Is neutral Value!");
		}
		else
		{
			printf("You Enter nagative!");
		}
	}
}