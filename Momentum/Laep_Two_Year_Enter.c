#include<stdio.h>
#include<conio.h>

main()
{
//	10. wap to find total leap year between given two number.
	int year,toyear,total,a;
	printf("Enter year :");
	scanf("%d",&year);
	printf("year last :");
	scanf("%d",&toyear);
	
	total=toyear-year;
	a=(total/4)+1;
	printf("%d",a);
	
}