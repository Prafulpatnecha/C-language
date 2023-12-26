//Q.1 Write a Program to find the cube of a given number using UDF.
#include<stdio.h>
#include<conio.h>
#include<string.h>

void cube(int a)
{
	
	int cub=a*a*a;
	printf("%d",cub);
}
void inputcu()
{
	int x;
	printf("Enter The Value Of Cube : ");
	scanf("%d",&x);
	cube(x);
}
main()
{
	inputcu();
}