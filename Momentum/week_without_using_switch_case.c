#include<stdio.h>
#include<conio.h>

main()
{
//	7. wap to print day of week without using switch case.
	int week;
	printf("Enter Value Of 1 To 7 On a Week : ");
	scanf("%d",&week);
	
	if(week==1)
	{
		printf("Sunday");
	}
	else if(week==2)
	{
		printf("Monday");
	}
	else if(week==3)
	{
		printf("Tuesday");
	}
	else if(week==4)
	{
		printf("wednesday");
	}
	else if(week==5)
	{
		printf("Thursday");
	}
	else if(week==6)
	{
		printf("Friday");
	}
	else if(week==7)
	{
		printf("Saturday");
	}
	else
	{
		printf("Only Enter (1 To 7)!");
	}
}