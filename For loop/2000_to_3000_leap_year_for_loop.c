#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter the value N : ");
	scanf("%d",&n);
	
	for(int a=2000; a<=n; a+=4)
	{
		 printf("%d ",a);
	}
}