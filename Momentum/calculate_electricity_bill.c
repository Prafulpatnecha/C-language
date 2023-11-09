#include<stdio.h>
#include<conio.h>

main()
{
	float el,total;
	printf("Enter Your Bill unit :");
	scanf("%f",&el);
	
	if(el>=0 && el<=50)
	{
		total=el*0.5;
		total=total+(total*0.2);
	}
	else if(el>50 && el<=100)
	{
		total=el*0.75;
		total=total+(total*0.2);
	}
	else if(el>=100 && el<=150)
	{
		total=el*1.25;
		total=total+(total*0.2);
	}
	else if(el>=150 && el>=200)
	{
		total=el*1.50;
		total=total+(total*0.2);
	}
	printf("Your Bill is : %.2f",total);
}