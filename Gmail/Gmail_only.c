#include<stdio.h>
#include<conio.h>
#include<string.h>
//gamil
void gma()
{
	char gmail[11]="@gmail.com";
	char gmai[100];
	start:
	printf("\nEnter Your Eamil Id : ");
	gets(gmai);
	
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
void main()
{
	gma();
}