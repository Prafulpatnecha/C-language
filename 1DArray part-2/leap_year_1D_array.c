#include<stdio.h>
#include<conio.h>

void main()
{
	int n=0,i,b,c,s;
	printf("Enter First Year : ");
	scanf("%d",&b);
	printf("Enter 2cand Year : ");
	scanf("%d",&c);
	for(i=b; i<=c; i++)
	{
		n++;
	}
	int a[n];
	n=0;
	for(i=b; i<=c; i++)
	{
		if(i%4==0)
		{
			a[n]=i;
			printf("%d \n",a[n]);
		}
		n++;
	}
}
//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array. Make this program in the shortest memory.
//For example,
//Input:
//Enter the first number: 2020
//
//Enter the second number: 2040
//
//Output:
//The array is: 2020, 2024, 2028, 2032, 2036, 2040
