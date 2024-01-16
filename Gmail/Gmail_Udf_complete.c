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
		printf("Gmail Is Parfact\n");
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
//--------------------------------Password------------------------------------------------------------------------------------------------------------------------
void number(int k,int l,char pass[32])
{
	int i;
	for(i=0; i<l; i++)
	{
		if(pass[i]>=48 && pass[i]<=57)
		{
			goto st;
		}
	}
	if(i==100)
	{
		st:
		printf("Your Password Is Perfect");
	}
	else
	{
		printf("Please Enter any One Digit!!\n");
		main(k);
	}
}

void specialchar(int k,int l,char pass[32])
{
	int i,ck=10;
	for(i=0; i<l; i++)
	{
//		32–47 / 58–64 / 91–96 / 123–126
		if(pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126)
		{
			ck=0;
		}
	}
	if(ck==0)
	{
		for(i=0; i<l; i++)
		{
			if(pass[i]==' ')
			{
				ck=1;
			}
		}
		if(ck==0)
		{
			number(k,l,pass);
		}
		else
		{
			printf("Please Check Space Is Not Allow!!\n");
			main(k);
		}
	}
	else
	{
		printf("Please Enter any One Special Characters!!\n");
		main(k);
	}
}

void uppercase(int k,int l,char pass[32])
{
	int i;
	for(i=0; i<l; i++)
	{
		if(pass[i]>='A' && pass[i]<='Z')
		{
			goto st;
		}
	}
	if(i==100)
	{
		st:
		specialchar(k,l,pass);
	}
	else
	{
		printf("Please Enter any One Upper Case!!\n");
		main(k);
	}
}

void lowercase(int le,char pas[32],int k)
{
	int i;
	for(i=0; i<le; i++)
	{
		if(pas[i]>='a' && pas[i]<='z')
		{
			goto st;
		}
	}
	if(i==100)
	{
		st:
		uppercase(k,le,pas);
	}
	else
	{
		printf("Please Enter any One Lower Case!!\n");
		main(k);
	}
}

void passcheck(char pas[32],int len)
{
	int k=5;
	if(len>8 && len<32)
	{
		lowercase(len,pas,k);
	}
	else
	{
		printf("Please Enter Minimum 8!! And Maximum 32!!\n");
		main(k);
	}
}

void pass()
{
	char password[32];
	printf("Enter Your Gmail Password : ");
	gets(password);
	int len=strlen(password);
	passcheck(password,len);
}

int main(int s)
{
	if(s!=5)
	{
		gmail();
	}
	pass();
	return 0;
}
//idea for gamil
//	if(s!=5)
//	{
//		printf("ok");
//		pass();
//	}
