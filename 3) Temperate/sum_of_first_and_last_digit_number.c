#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,d,n;
	printf("Enter The Any Value : ");
	scanf("%d",&a);
	n=a%10;
	while(a>0)
	{
		d=a;
		a/=10;
	}
	printf("%d + %d = %d \nsum of first and last digit of a number",d,n,d+n);
}