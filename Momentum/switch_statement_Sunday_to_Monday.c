#include<stdio.h>
#include<conio.h>

main()
{
//		4. Write C program use switch statement. Display Monday to Sunday. --> Ex. User Input: M    Output: Monday.
	char week;
	printf("Enter Only (S,M,T,W,t,F,s) : ");
	scanf(" %c",&week);
	
	switch(week)
	{
		case 'S':printf("Sunday");
		break;
		case 'M':printf("Monday");
		break;
		case 'T':printf("Tuesday");
		break;
		case 'W':printf("Wednesday");
		break;
		case 't':printf("Thurday");
		break;
		case 'F':printf("Friday");
		break;
		case 's':printf("Saturday");
		break;
		default:printf("Please Entered Correct Input (S,M,T,W,t,F,s)!");
	}
}