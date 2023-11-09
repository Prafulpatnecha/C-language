#include<stdio.h>
#include<conio.h>

main()
{
//	9. wap to make votter registration system.
	int age;
	printf("Enter Votter Age :");
	scanf("%d",&age);
	
	if(age>17)
	{
		if(age<100)
		{
			printf("You Are eligible For vot");
		}
		else
		{
			printf("You Are Not eligible For vot!");	
		}
	}
	else
	{
		if(age<0)
		{
			printf("You Are Entered A Nagitive Value!");
		}
		else
		{
			printf("You Are Not eligible For vot!");
		}
	}
}