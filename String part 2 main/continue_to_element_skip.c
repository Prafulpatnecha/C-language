#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[100];
	printf("Enter Any Character frequency : ");
	gets(a);
	
	int l=strlen(a);
	int check=0,i,j=l-1;
	for(i=0; i<l; i++)
	{
		if(a[i]==' ')
		{
			continue;
		}
		printf("%c",a[i]);
		j--;
	}
}