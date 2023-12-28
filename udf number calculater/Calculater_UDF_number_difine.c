#include<stdio.h>
#include<conio.h>
#include<string.h>

void user()
{
	int a,b;
	printf("Enter The Value A : ");
	scanf("%d",&a);
	printf("Enter The Value B : ");
	scanf("%d",&b);
}
void sum()
{
	int a,b;
	printf("Sum : %d",a+b);
}

void sub()
{
	int a,b;
	printf("Subtraction : %d",a-b);
}

void multi()
{
	int a,b;
	printf("Multiplication : %d",a*b);
}

void div()
{
	int a,b;
	printf("Divisible Of : %d",a/b);
}

void mod()
{
	int a,b;
	printf("Module Of : %d",a%b);
}

void cal()
{
	int i;
	char ca;
	s:
	if(ca!='0')
	{
		while(1)
		{
			printf("Enter 0 <-- To Stop Calculater\nEnter This Characters (1-> +,2-> -,3-> *,4-> /,5-> %%) : ");
			scanf(" %c",&ca);
			if(ca=='0')
			{
				goto s;
			}
			
			user();
			printf("\n");
			switch(ca)
			{
				case '1': sum();
				break;
				case '2': sub();
				break;
				case '3': multi();
				break;
				case '4': div();
				break;
				case '5': mod();
				break;
				default : printf("Please Enter Only This Key : (0,1,2,3,4,5)!");
				break;
			}
			printf("\n\n");
		}
	}
}

void main()
{
	cal();
}
