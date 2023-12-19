//creating By a gmail and Password.Udf,string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
//password
void pas()
{
	char pass[32];
	start:
		
		printf("\n");
	printf("Enter your Password : ");
	gets(pass);
	int i,ck=0,l=strlen(pass);

	if(l>=8 && l<=32)
	{
		if(pass[0]>='A' && pass[0]<='Z')
		{
			ck=1;
		}
		else
		{
			printf("Password is Not parfact First Tongal Key!!");
			goto start;
		}
		if(ck==1)
		{
			ck=0;
			for(i=0; i<l; i++)
			{
				if(pass[i]>='a' && pass[i]<='z')
				{
					ck=1;
				}
			}
			if(ck==1)
			{
				ck=0;
				for(i=0; i<l; i++)
				{
					if(pass[i]>=48 && pass[i]<=57)
					{
						ck=1;
					}
				}
				if(ck==1)
				{
					ck=0;
					for(i=0; i<l; i++)
					{
						if(pass[i]==' ')
						{
							ck=1;
						}
					}
					if(ck==0)
					{
						ck=0;
//	32–47 / 58–64 / 91–96 / 123–126
						for(i=0; i<l; i++)
						{
							if(pass[i]>=33 && pass[i]<=47 || pass[i]>=58 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126)
							{
								ck=1;
							}
						}
						if(ck==1)
						{
							printf("Your Password is Parfact");
						}
						else
						{
							printf("Password is Not parfact Special Character!!");
							goto start;
						}
					}
					else
					{
						printf("Password is Not parfact Space is not allow!!");
						goto start;
					}
				}
				else
				{
					printf("Password is Not parfact One Number Are Compulsory!!");
					goto start;
				}
			}
			else
			{
				printf("Password is Not parfact small character!!");
				goto start;
			}
		}
	}
	else
	{
		printf("Password is Not parfact Please Enter Minimum 8 And Maximum 32 Only Enter!!");
		goto start;
	}
}
void main()
{
	pas();
}