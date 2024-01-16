#include<stdio.h>
#include<conio.h>
#include<string.h>

void number(int k,int l,char pass[32])
{
	int i,ck=0;
	for(i=0; i<l; i++)
	{
		if(pass[i]>=48 && pass[i]<=57)
		{
			ck=1;
		}
	}
	if(ck==1)
	{
		printf("Your Password Is Perfect");
	}
	else
	{
		printf("Please Enter any One Digit!!\n");
		main();
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
			main();
		}
	}
	else
	{
		printf("Please Enter any One Special Characters!!\n");
		main();
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
		main();
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
		main();
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
		main();
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

int main()
{
	pass();
	return 0;
}
//idea for gamil
//	if(s!=5)
//	{
//		printf("ok");
//		pass();
//	}
