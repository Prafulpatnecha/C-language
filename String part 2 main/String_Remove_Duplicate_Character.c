#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[10000],temp;
	printf("Enter Any Character Remove From Duplicate Character : ");
	gets(a);
	
	int l=strlen(a);
	int check=0,i,j;
	for(i=0; i<l; i++)
	{
		check=0;
		for(j=0; j<l; j++)
		{
			if(a[i]==a[j] && (i!=j))
			{
				check=1;
			}
		}
		if(check!=1)
		{
			printf("%c",a[i]);
		}
	}
	printf("\n");
}