#include<stdio.h>
#include<conio.h>
#include<string.h>

struct mark
{
	float marks,per,rollno;
	float chemistry,mathematics,Physics;
	char name[50];
};

void main()
{
	int i=0,n;
	float a;
	printf("Enter The Value Of Size Mark Sheets : ");
	scanf("%d",&n);
	struct mark sheet[n];
	char name[50],c='%';
	n--;
	printf("Roll No : ");
	scanf("%f",&a);
	
	st:
	if(i!=n+1)
	{
		printf("\nEnter details of Student %d:\n",i+1);
		gets(name);
	}
	printf("Roll No : %.0f\n",a);
	sheet[i].rollno=a;
	printf("Name : ");
	gets(name);
		strcpy(sheet[i].name,name);
	printf("Chemistry : ");
	scanf("%f",&sheet[i].chemistry);
	printf("Mathematics : ");
	scanf("%f",&sheet[i].mathematics);
	printf("Physics : ");
	scanf("%f",&sheet[i].Physics);
	sheet[i].marks=sheet[i].chemistry+sheet[i].mathematics+sheet[i].Physics;
	sheet[i].per= (sheet[i].marks/300)*100;
	// (value/total value)×100
	if(i!=n)
	{
		a++;
		i++;
		goto st;
	}
	for(i=0; i<=n; i++)
	{
		printf("\ndetails of Student %d:\n",i+1);
		printf("%s (%.0f)\n",sheet[i].name,sheet[i].rollno);
		printf("Chemistry : %.0f\n",sheet[i].chemistry);
		printf("Mathematics : %.0f\n",sheet[i].mathematics);
		printf("Physics : %.0f\n",sheet[i].Physics);
		printf("Total : %.0f/300\n",sheet[i].marks);
		printf("Percent : %.2f %c\n",sheet[i].per,c);
	}
}