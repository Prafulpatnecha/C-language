#include<stdio.h>
#include<conio.h>

main()
{
//* * *
//*     *
//*    *
//* * *
//*    *
//*     *
//* * *
	int i,j,k,a;
		for(i=1; i<=7; i++)
		{
			for(j=1; j<=3; j++)
			{
				if(i==1 || i==4 || i==7 || j==1 || j==3)
				{
					printf("* ");
				}
				else if(i==3 || i==5)
				{
					printf("   ");
				}
				else if(i==2 || i==6)
				{
					printf("    ");
				}
			}
			printf("\n");
		}
}