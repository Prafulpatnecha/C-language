#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int i,j;
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=6; j++)
		{
			if(i==1 &&(i>=1 && j<=3) || j==1 || j==6 && (i==2 && j<=6) || j==5 && (i==3 && j<=5) || i==4 && (i>=1 && j<=3) || j==5 && (i==5 && j<=5) || j==6 && (i==6 && j<=6) || i==7 && (i>=1 && j<=3))
			{
				printf("* ");
			}
			else
			{
				printf(" ");
			}
		}printf("\n");
	}
	
	
}