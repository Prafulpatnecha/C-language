#include<stdio.h>
#include<conio.h>
#include<String.h>

void main()
{
	int n,i;
	char s,b[6],a[6]={"Gmail."};
	int j=6;
	for(i=0; i<6; i++)
	{
		j--;
		b[j]=a[i];
	}
	printf("%s",b);
}