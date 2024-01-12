#include<stdio.h>
#include<conio.h>
#include<string.h>

struct employee
{
    int emp_id,emp_age;
    char emp_role[20],emp_name[21],emp_city[50],emp_experience[50],emp_company_name[50];
};
void main()
{
    int n;
    printf("Enter The Value Size Of Structure n : ");
    scanf("%d",&n);
    n--;
    struct employee s1[n];
    char role[20],name[21],city[50],experience[50],company_name[50];
    int i=0,j=0;
    st:
    if(i!=n+1)
    {
        printf("\nEmployee Record System {%d}\n",i);
        gets(company_name);
    }
    printf("Enter Company Name : ");
    gets(company_name);
    printf("Enter Your Name : ");
    gets(name);
    printf("Enter Your Role : ");
    gets(role);
    printf("Enter Your Experience : ");
    gets(experience);
    printf("Enter Your City : ");
    gets(city);
    strcpy(s1[i].emp_company_name,company_name);
    strcpy(s1[i].emp_name,name);
    strcpy(s1[i].emp_role,role);
    strcpy(s1[i].emp_experience,experience);
    strcpy(s1[i].emp_city,city);

    printf("Enter Your Id : ");
    scanf("%d",&s1[i].emp_age);
    printf("Enter Your Age : ");
    scanf("%d",&s1[i].emp_id);
    
    if(i!=n)
    {
        i++;
        goto st;
    }

    for(i=0; i<=n; i++)
    {
        printf("\n\nEmployee Record System {%d}\n\n",i);
        printf("Your Company Name Is : %s\n",s1[i].emp_company_name);
        printf("Your Name Is : %s\n",s1[i].emp_name);
        printf("Your Role Is : %s\n",s1[i].emp_role);
        printf("Your Experience Is : %s\n",s1[i].emp_experience);
        printf("Your City Is : %s\n",s1[i].emp_city);
        printf("Your Id Is : %d\n",s1[i].emp_id);
        printf("Your Age Is : %d\n",s1[i].emp_age);
    }
}
//Namo