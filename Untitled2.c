#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char a[100];
	
	printf("Enter The Character Fre** : ");
	gets(a);
	
	int ck,i,j,l=strlen(a);
	int b[100];
	for(i=0; i<l; i++)
	{
		b[i]=-1;
	}
	
	for(i=0; i<l; i++)
	{
		ck=1;
		for(j=i+1; j<l; j++)
		{
			if(a[i]==a[j])
			{
				ck++;
				b[j]=0;
			}
		}
		if(b[i]!=0)
		{
			b[i]=ck;
		}
	}
	puts(a);
	for(i=0; i<l; i++)
	{
		if(b[i]!=0)
		{
			printf("%c ---> %d\n",a[i],b[i]);
		}
	}
}