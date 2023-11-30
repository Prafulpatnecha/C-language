#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=4; j++)
			{
				if(j==1 || j==4)
				{
					printf("* ");
				}
				else if(j==2 && i==3)
				{
					printf("*  ");
				}
				else if(j==2 && i==4)
				{
					printf("  *");
				}
				else if(j==3 && i==5)
				{
					printf(" * ");
				}
				else
				{
					printf("   ");
				}
			}
			printf("\n");
		}
}