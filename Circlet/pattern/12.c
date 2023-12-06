#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(int a=i; a<5; a++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}