#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=3; j++)
			{
				if(j==1 && i==1 || j==1 && i==2 || j==1 && i==3 || j==1 && i==4 || j==1 && i==5 || j==3 && i==1 || j==3 && i==2 || j==3 && i==3 || j==3 && i==4 || j==3 && i==5)
				{
					printf("*     ");
				}
				else if(i==6 && j==1 || i==6 && j==3)
				{
					printf(" *  ");
				}
				else if(i==7 && j==2)
				{
					printf("   *");
				}
			}
			printf("\n");
		}
}