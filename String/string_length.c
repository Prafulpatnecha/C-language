#include<stdio.h>
#include<conio.h>
#include<String.h>

void main()
{
	char a[]="Praful Patnecha";
	int l=sizeof(a)/sizeof(a[0])-1;
	printf("String Length : %d",l);
}