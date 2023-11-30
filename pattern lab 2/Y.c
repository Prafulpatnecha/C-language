#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=2; j++)
			{
				if(i==1)
				{
					printf("*       ");
				}
				else if(i==2)
				{
					printf(" *    ");
				}
				else if(i==3)
				{
					printf("  * ");
				}
				else if(j==1 && i==4 || j==1 && i==5 || j==1 && i==6 || j==1 && i==7)
				{
					printf("    *");
				}
			}
			printf("\n");
		}
}