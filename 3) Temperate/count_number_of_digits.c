#include<stdio.h>
#include<conio.h>

main()
{
	int n,f=1,count,r;
	printf("Enter The Value N : ");
	scanf("%d",&count);
	while(count>0)
	{
		count/=10;
		n=f++;
	}
	printf("%d",n);
}