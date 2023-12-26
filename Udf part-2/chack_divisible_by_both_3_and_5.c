#include<stdio.h>
#include<conio.h>
#include<string.h>

void divisible_chack(int a)
{
	if(a%3==0 && a%5==0)
	{
		printf("The given number is divisible by both 3 & 5.");
	}
	else
	{
		printf("The given number is not divisible by both 3 & 5.");
	}
}

void divisible()
{
	int n;
	printf("Enter The Value Of Divisible 3 & 5 : ");
	scanf("%d",&n);
	divisible_chack(n);
}

main()
{
	divisible();
}
//Q.2 Write a Program to check if a given number is divisible by both 3 & and 5 or not by using UDF.For example,
//Input:
//Enter any number: 15
//
//Output:
//The given number is divisible by both 3 & 5.
//
//------------------------------------------
//
//For example,
//Input:
//Enter any number: 10
//
//Output:
//The given number is not divisible by both 3 & 5.