#include<stdio.h>
#include<conio.h>

main()
{
//	2. WAP to print month names using switch case.
	char month;
	printf("Enter month (J,F,M,A,m,j,ja,a,S,O,N,D) : ");
	scanf(" %c",&month);
	
	switch(month)
	{
		case 'J':printf("January --> 31");
		break;
		case 'F':printf("February --> 28 and 29 in leap year");
		break;
		case 'M':printf("March --> 31");
		break;
		case 'A':printf("April --> 30");
		break;
		case 'm':printf("May --> 31");
		break;
		case 'j':printf("June --> 30");
		break;
		case 'ja':printf("July --> 31");
		break;
		case 'a':printf("August --> 31");
		break;
		case 'S':printf("September --> 30");
		break;
		case 'O':printf("October --> 31");
		break;
		case 'N':printf("November --> 30");
		break;
		case 'D':printf("December --> 31");
		break;
		default:printf("Only Entered month (J,F,M,A,m,j,ja,a,S,O,N,D)!");
	}
}