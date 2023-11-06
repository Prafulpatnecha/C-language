#include<stdio.h>
#include<conio.h>

main()
{
//	nested 5 varible find for if and else.
	int a,b,c,d,e;
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);
	printf("Enter d :");
	scanf("%d",&d);
	printf("Enter e :");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a<b)
	{
//		a,c,d,e
		if(a<c)
		{
//			a,d,e
			if(a<d)
			{
//				a,e
				if(a<e)
				{
					printf("a is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
//				d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
//			c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
//				d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
	else
	{
//		b,c,d,e
		if(b<c)
		{
//			b,d,e
			if(b<d)
			{
				if(b<e)
				{
					printf("b is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
//				d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
		else
		{
			//			c,d,e
			if(c<d)
			{
				if(c<e)
				{
					printf("c is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
			else
			{
//				d,e
				if(d<e)
				{
					printf("d is minimum");
				}
				else
				{
					printf("e is minimum");
				}
			}
		}
	}
}