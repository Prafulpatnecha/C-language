#include<stdio.h>
#include<conio.h>
main()
{
//	1*2*3*4*5
	int a,b=1,c=1;
	
	printf("Enter The Value Factorial : ");
	scanf("%d",&a);
	start:
		
		c=c*b;
		b++;
		
		if(b<=a)
		{
			goto start;
		}
		printf("%d ",c);
}