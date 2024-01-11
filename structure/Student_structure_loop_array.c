#include<stdio.h>
#include<conio.h>
#include<string.h>
struct stu
{
    int stu_id,stu_age,stu_standard;
    char stu_name[50],stu_course[50],stu_city[50],stu_school[50];
};

void main()
{
    struct stu s1[3];
    char name[50],course[50],city[50],school[50];
    int i,j=0,n=0;
    printf("Seat No =[%d]\n",n);
    if(j==2)
    {
        st:
        n++;
        printf("Seat No =[%d]\n",n);
        gets(name);
    }
    printf("Your Name : ");
    gets(name);
    printf("Your city : ");
    gets(city);
    printf("Your course : ");
    gets(course);
    printf("Your school : ");
    gets(school);
        strcpy(s1[n].stu_name,name);
        strcpy(s1[n].stu_city,city);
        strcpy(s1[n].stu_course,course);
        strcpy(s1[n].stu_school,school);
    printf("Enter Standard : ");
    scanf("%d",&s1[n].stu_standard);
    printf("Enter Age : ");
    scanf("%d",&s1[n].stu_age);
    printf("Enter Id : ");
    scanf("%d",&s1[n].stu_id);
    if(n!=2)
    {
        goto st;
    }
    
    for(i=0; i<3; i++)
    {
        printf("\n\nSeat Data No =[%d]\n\n",i);
        printf("Your Name Is : %s\n",s1[i].stu_name);
        printf("Your City Is : %s\n",s1[i].stu_city);
        printf("Your Course Is : %s\n",s1[i].stu_course);
        printf("Your School Is : %s\n",s1[i].stu_school);
        printf("Your Standard Is : %d\n",s1[i].stu_standard);
        printf("Your Age Is : %d\n",s1[i].stu_age);
        printf("Your Id Is : %d\n",s1[i].stu_id);
    }
}