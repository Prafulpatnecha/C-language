#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=4; j++)
			{
				if(j==1 && i==7 || i==7 && j==2 || i==7 && j==3)
				{
					printf(" *");
				}
				else if(j==1 || j==3)
				{
					printf("*     ");
				}
			}
			printf("\n");
		}
}