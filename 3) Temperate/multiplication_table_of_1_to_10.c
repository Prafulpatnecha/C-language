#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,s;
	for(a=1; a<=10; a++)
	{
		for(b=1; b<=10; b++)
		{
			s=b*a;
			printf("%d ",s);
		}
		printf("_");
	}
}