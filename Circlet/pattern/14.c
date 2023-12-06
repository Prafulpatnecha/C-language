#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(int a=1; a<i; a++)
		{
			printf(" ");
		}
		for(j=i; j<=5; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}