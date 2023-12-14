#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char a[100];

	printf("Enter The String Is Numeric or Not : ");
	gets(a);
	
	int ck=0,i,l=strlen(a);
	
	for(i=0; i<l; i++)
	{
		if(a[i]>=48 && a[i]<=57)
		{
			ck=1;
		}
	}
	if(ck==1)
	{
		printf("Yes Those Are Numeric");
	}
	else
	{
		printf("Those Are Not A Numeric");
	}
}