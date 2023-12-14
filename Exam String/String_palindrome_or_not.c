#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char a[100];

	printf("Enter Any Character Are Find palindrome or not : ");
	gets(a);
	
	int l=strlen(a)-1;

	int i,j=l,check=0;
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
		printf("yes Palindrome");
	}
}