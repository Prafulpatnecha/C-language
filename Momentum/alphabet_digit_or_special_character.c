#include<stdio.h>
#include<conio.h>

main()
{
//	1. Write C program to input any character and check whether it is alphabet, digit or special character.
	char a;
	printf("Enter The Value Of Alphabet, Digit or Special Character : ");
	scanf(" %c",&a);
//	Alphabet
	if(a>=65 && a<=90 || a>=97 && a<=122)
	{
		printf("You Entered Alphabet");
	}
	//32–47 / 58–64 / 91–96 / 123–126 --> Special character.
	else if(a>=32 && a<=47 || a>=58 && a<=64 || a>=91 && a<=96 || a>=123 && a<=126)
	{
		printf("You Entered Special character");
	}
//	Digits
	else if(a>=48 && a<=57)
	{
		printf("You Entered Digits");
	}
}