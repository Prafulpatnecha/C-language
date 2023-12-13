#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char a[100];
	
	printf("Enter The Any 100 Word : ");
	gets(a);
	
	int lent=strlen(a);
	
	if(a[0]>='a' && a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	
	int i;
	
	for(i=1; i<lent;i++)
	{
		if(a[i-1]==' ')
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
	}
	puts(a);
}