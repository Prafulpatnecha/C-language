#include<stdio.h>
#include<conio.h>

main()
{
	int n,f=0;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	for(int a=1; a<=10; a++)
	{
		f=n*a;
		printf("%d ",f);
	}
}