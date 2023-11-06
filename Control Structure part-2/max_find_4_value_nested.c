#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	printf("Enter A :");
	scanf("%d",&a);
	printf("Enter B :");
	scanf("%d",&b);
	printf("Enter C :");
	scanf("%d",&c);
	printf("Enter D :");
	scanf("%d",&d);
	
	//a,b,c,d,
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				printf("A is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("C is Maximum");
			}
			else
			{
				printf("D is Maximum");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				printf("B is maximum");
			}
			else
			{
				printf("D is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("C is maximum");
			}
			else
			{
				printf("D is maximum");
			}
		}
	}
}