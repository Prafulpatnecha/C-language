#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=3; j++)
			{
				if(i==1 || i==7)
				{
					printf(" *");
				}
				else if(j==1)
				{
					printf("* ");
				}
				else if(j==3 && i==4 )
				{
					printf(" * * *");
				}
				else if(j==3 && i==2 || j==3 && i==5 || j==3 && i==6)
				{
					printf("     *");
				}
			}
			printf("\n");
		}
}