#include<stdio.h>
#include<conio.h>

main()
{
	int a,b;
	printf("Enter The Any Value : ");
	scanf("%d",&a);
	
	while(a>0)
	{
		b=a%10;
		printf("%d",b);
		b=a/10;
		a=b;
		
	}
}