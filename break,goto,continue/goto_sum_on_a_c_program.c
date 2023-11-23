#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,sum=0;
	printf("Enter The Value Of Sum : ");
	scanf("%d",&a);
	s:
		
		sum=sum+b;
		b++;
		if(b<=a)
		{
			goto s;
		}
		printf("%d",sum);
		
	
}