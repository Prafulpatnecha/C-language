#include<stdio.h>
#include<conio.h>

main()
{
//	5. Write C program to calculate factorial of a number.
	int a,b,sum;
	printf("Enter The value Of N : ");
	scanf("%d",&b);
	for(a=1; a<=b;a++)
	{
		sum=sum+a;
	}
	printf("%d",sum);
}