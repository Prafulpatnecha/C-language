#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=8; i++)
		{
			for(j=1; j<=5; j++)
			{
				if(i==1)
				{
					printf("* ");
				}
				else if(j==1 && i==2)
				{
					printf("       *");
				}
				else if(j==1 && i==3)
				{
					printf("      *");
				}
				else if(j==1 && i==4)
				{
					printf("     *");
				}
				else if(j==1 && i==5)
				{
					printf("    *");
				}
				else if(j==1 && i==6)
				{
					printf("   *");
				}
				else if(j==1 && i==7)
				{
					printf("  *");
				}
				else if(i==8)
				{
					printf(" *");
				}
			}
			printf("\n");
		}
}