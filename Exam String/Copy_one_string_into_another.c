#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char a[100];
	printf("Enter The String copy : ");
	gets(a);
	int i,l=strlen(a);
	char b[l];
	for(i=0; i<l; i++)
	{
		b[i]=a[i];
	}
	puts(b);
}