#include<stdio.h>
#include<conio.h>
main()
{
//	3. Write C program to find out max from 4 numbers using nested if.
	int a,b,c,d;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
//	a,b,c,d
	if(a>b)
	{
//		a,c,d
		if(a>c)
		{
//			a,d
			if(a>d)
			{
				printf("a is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
//			c,d
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
	else
	{
//		b,c,d
		if(b>c)
		{
//			b,d
			if(b>d)
			{
				printf("b is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
//			c,d
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
	}
}