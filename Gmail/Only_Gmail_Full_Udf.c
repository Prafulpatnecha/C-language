#include<stdio.h>
#include<conio.h>
#include<string.h>

void e(int len,char gmail[38])
{
	int i;
	int ck=0;
	for(i=0; i<len-10; i++)
	{
//	32–47 / 58–64 / 91–96 / 123–126 --> Ascii Value Special Characters
		if(gmail[i]>='A' && gmail[i]<='Z')
		{
			ck=2;
		}
		if(gmail[i]>=32 && gmail[i]<=47 || gmail[i]>=58 && gmail[i]<=64 || gmail[i]>=91 && gmail[i]<=96 || gmail[i]>=123 && gmail[i]<=126)
		{
			ck=2;
		}
	}
	if(ck==0)
	{
		printf("Gmail Is Parfact");
	}
	else
	{
		printf("Gmail Is Not parfact Does Not Allow Upper Case Characters!! And Special Characters !!\n");
		main();
	}
}

void h(int le,char gm[38])
{
	char gmail[11]="@gmail.com";
	int l=strlen(gmail),i,j=0,ck=0;
	
	for(i=le-l; i<le; i++)
	{
		if(gmail[j]==gm[i])
		{
			ck++;
		}
		j++;
	}
	if(ck==10)
	{
		e(le,gm);
	}
	else
	{
		printf("Please Check !!@gmail.com!!\n");
		main();
	}
}

void c(int le,char gma[38])
{
	if(le>12 && le<38)
    {
		h(le,gma);
    }
    else
    {
        printf("Please Enter 12 TO UP AND 38 To Low Character!!\n");
        main();
    }
}

void user()
{
    char g[38];
    printf("Enter Your Gmail Id : ");
    gets(g);
    int len=strlen(g);
    c(len,g);
}

void gmail()
{
    user();
}                  

int main()
{
    gmail();
    return 0;
}
