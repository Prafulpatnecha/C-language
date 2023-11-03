#include<stdio.h>
#include<conio.h>

main()
{
//	3. Write C program to convert temperature from degree Celsius to Fahrenheit.
//	(f=(9.5*c)+32)
	float f,c;
	const float a=9.5,b=32;
	printf("Enter The Value :");
	scanf("%f",&c);
	
	f=(9.5*c)+32;
	printf("Fahrenheit :%.2f",f);
}