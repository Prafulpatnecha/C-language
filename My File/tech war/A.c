//Akhil Sir 

#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	for(i=1;i<7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==1 && (i>=1 && j<=5) || j==1 || j==5 || i==3 && (i>=1 && j<=5))
			{
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
			printf("\n");
	}
}
