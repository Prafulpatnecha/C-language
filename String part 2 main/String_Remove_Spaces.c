#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[10000],temp;
	printf("Enter Any Character Remove Spaces : ");
	gets(a);
	
	int l=strlen(a);
	int check=0,i,j;
	for(i=0; i<l; i++)
	{
		check=0;
		for(j=0; j<l; j++)
		{
			if(a[j]==' ')
			{
				check=1;
			}
			if(check==1)
			{
				a[j]=a[j+1];
			}
		}
	}
	printf("\n\n\n");
	puts(a);
}