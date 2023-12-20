//creating By a gmail and Password.Udf,string.
#include<stdio.h>
#include<conio.h>
#include<string.h>
//gmail
void gma()
{
	char gmail[11]="@gmail.com";
	char gmai[100];
	start:
	printf("\nEnter Your Eamil Id : ");
	gets(gmai);
	
//	pas();
	
	int ck=0,i,j,len,l=strlen(gmai);
	
	if(l>7 && l<32)
	{
		len=l-10;
		
		int gm=0;
		ck=1;
		for(i=len; i<l; i++)
		{
			if(gmail[gm]==gmai[i])
			{
				ck++;
			}
			gm++;
		}
		if(ck==11)
		{
			ck=0;
			for(i=0; i<l-10; i++)
			{
				if(gmai[i]>=32 && gmai[i]<=47 || gmai[i]>=58 && gmai[i]<=64 || gmai[i]>=91 && gmai[i]<=96 || gmai[i]>=123 && gmai[i]<=126)
				{
					ck=1;
				}
			}
			if(ck==0)
			{
//				32–47 / 58–64 / 91–96 / 123–126
					ck=0;
				for(i=0; i<l-10; i++)
				{
					if(gmai[i]>='A' && gmai[i]<='Z')
					{
						ck=1;	
					}
				}
				if(ck==0)
				{
					printf("Your Gmail Is Perfect");		
				}
				else
				{
					printf("Your Gmail Is Enter Only small Alphabet");
					goto start;
				}
			}
			else
			{
				printf("Does Not Space And Special Characters Allow!!");
				goto start;
			}
		}
		else
		{
			printf("Does Not is perfect @gmail.com!!");
			goto start;
		}
	}
	else
	{
		printf("Please Enter 7 to 32 Character!!");
		goto start;
	}
}
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
	gma();
	pas();
}