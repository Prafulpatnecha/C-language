#include<stdio.h>
#include<conio.h>
#include<string.h>

void user()
{
	float a,b;
	printf("Enter The Value A : ");
	scanf("%f",&a);
	printf("Enter The Value B : ");
	scanf("%f",&b);
}
void sum()
{
	float a,b;
	printf("Sum : %.2f",a+b);
}

void sub()
{
	float a,b;
	printf("Subtraction : %.2f",a-b);
}

void multi()
{
	float a,b;
	printf("Multiplication : %.2f",a*b);
}

void div()
{
	float a,b;
	printf("Divisible Of : %.2f",a/b);
}


void cal()
{
	char ca;
	printf("Enter This Characters (+,-,*,/) : ");
	scanf(" %c",&ca);
	user();
	printf("\n");
	switch(ca)
	{
		case '+': sum();
		break;
		case '-': sub();
		break;
		case '*': multi();
		break;
		case '/': div();
		break;
		default : printf("Please Enter Only This Key : (+,-,*,/)!");
		break;
	}
	printf("\n\n");
}

void main()
{
	while(1)
	{
		cal();
	}
}