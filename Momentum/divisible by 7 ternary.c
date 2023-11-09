#include<stdio.h>
#include<conio.h>

main()
{
//	wap to check number is divisible by 7 or not using ternary.
	int num;
	printf("divisible by 7 :");
	scanf("%d",&num);
	
	(num%7==0)?printf("Yes 7 to Divisible"):printf("Not 7 to Divisible");
}