#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value Of N : ");
	scanf("%d",&n);
	
	for(int a=1; a<=n; a+=2)
	{
		printf("%d ",a);
	}
}