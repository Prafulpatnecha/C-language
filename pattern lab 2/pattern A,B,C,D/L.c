#include<stdio.h>
#include<conio.h>

main()
{
	int i,j;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=4; j++)
			{
				if(i==7 || j==1)
				{
					printf("* ");
				}
			}
			printf("\n");
		}
}