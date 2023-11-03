#include<stdio.h>
#include<conio.h>

main()
{
	float Base_salary,hra,da,ta,salary;
	printf("Enter Value Of Base Salary :");
	scanf("%f",&Base_salary);
	printf("Enter Value Of HRA :");
	scanf("%f",&hra);
	printf("Enter Value Of DA :");
	scanf("%f",&da);
	printf("Enter Value Of TA :");
	scanf("%f",&ta);
	
	salary=(Base_salary*hra)/100+(Base_salary*da)/100+(Base_salary*ta)/100+Base_salary;
	printf("%.2f",salary);
}