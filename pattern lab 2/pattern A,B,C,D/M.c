#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=4; j++)
			{
				if(j==4 || j==1)
				{
					printf("* ");
				}
				else if(i==2)
				{
					printf("* ");
				}
				else if(j==2 && i==3)
				{
					printf(" *");
				}
				else
				{
					printf("  ");
				}
			}
			printf("\n");
		}
}