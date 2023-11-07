#include<stdio.h>
#include<conio.h>

main()
{
	int age;
	printf("Enter Your Age :");
	scanf("%d",&age);
	
	if(age>100)
	{
		printf("please Enter 100 under Value!");
	}
	else if(age>0)
	{
		printf("You Are Eligible");
	}
	else if(age==0)
	{
		printf("0 is natural value!");
	}
	else if(age<0)
	{
		printf("You Enter nagative!");
	}
}