#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	for(i=1; i<=5; i++)
	{
		for(int a=i; a<5; a++)
		{
			printf(" ");
		}
		for(j=i; j>=1; j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}