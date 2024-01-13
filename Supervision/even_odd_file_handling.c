#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *even,*odd;
	even=fopen("Even.txt","w");
	odd=fopen("Odd.txt","w");
	int a=50,b=70;
	fprintf(even,"Even : \n");
	fprintf(odd,"Odd : \n");
	for(a; a<=b; a++)
	{
		if(a%2==0)
		{
			fprintf(even,"%d ",a);
		}
		else
		{
			fprintf(odd,"%d ",a);
		}
	}
	
}