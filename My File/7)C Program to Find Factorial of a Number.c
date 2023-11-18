#include<stdio.h>
#include<conio.h>
void main()
{
//	7)C Program to Find Factorial of a Number
	int a=1,b=1,c;
	printf("Enter the value :");
	scanf("%d",&c);
	for(a; b<=c;)
	{
		a*=b;
		b++;
	}
		printf("%d ",a);
}