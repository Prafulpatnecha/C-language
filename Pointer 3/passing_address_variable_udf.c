#include<stdio.h>
#include<conio.h>

void pass(int *ptr)
{
	int a;
	printf("Enter The Value Addition : ");
	scanf("%d",&a);
	*ptr=*ptr+a;
}

void main()
{
	int a;
	printf("Enter The Value N : ");
	scanf("%d",&a);
	printf("%d\n",a);
	pass(&a);
	printf("%d",a);
}