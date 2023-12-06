#include<stdio.h>
#include<conio.h>

void main()
{
	int array[7];
	int i=0,year,toyear,j=0;
	printf("Limit Only Six! Value : Ex. 2000 to 2020 Leap Year \n");
	printf("Enter First Leap Year : ");
	scanf("%d",&year);
	printf("Enter Second Leap Year : ");
	scanf("%d",&toyear);
	int x=toyear-year;
	x/=2;
//	printf("%d",x);
	for(i=1; i<x; i++)
	{
		array[i]=year+j;
		printf("%d ",array[i]);
		j+=4;
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