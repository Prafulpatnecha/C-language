#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char a[100],b[100];//="@gmail.com";
	
	printf("Enter First Compare Be match : ");
	gets(b);
	printf("Enter Second Compare Be match : ");
	gets(a);
	
	int l=strlen(b);

	int i,j=l,check=1;
	
	for(i=0; i<l; i++)
	{
		if(b[i]==a[i])
		{
			check++;
		}
	}
	
	if(check==l+1)
	{
		printf("Yes perfact");
	}
	else
	{
		printf("No perfact");
	}
}