#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[100];
	printf("Enter Any Character Palindrome : ");
	gets(a);
	
	int l=strlen(a);
	int check=0,i,j=l-1;
	for(i=0; i<l; i++)
	{
		if(a[i]!=a[j])
		{
			check=1;
		}
		j--;
	}
	
	if(check==1)
	{
		printf("No Palindrome");
	}	
	else
	{
		printf("Yes Palindrome");
	}
}