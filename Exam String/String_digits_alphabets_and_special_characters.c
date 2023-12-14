#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char a[100];//="Pr@ul9#5af5$";
	
	printf("Enter Any digits, alphabets & special characters : ");
	gets(a);
	
	int l=strlen(a);
	int i,count=0,digits=0,special=0,on=0;
	for(i=0; i<l; i++)
	{
		if(a[i]>=65 && a[i]<=90)
		{
			on++;
		}
		else if(a[i]>=97 && a[i]<=122)
		{
			count++;
		}
		else if(a[i]>=32 && a[i]<=47 || a[i]>=58 && a[i]<=64 || a[i]>=91 && a[i]<=96 || a[i]>=123 && a[i]<=126)
		{
			special++;
		}
		else if(a[i]>=48 && a[i]<=57)
		{
			digits++;
		}
	}
	printf("Small Alphabets Characters : %d\n",count);
	printf("Alphabets Characters : %d\n",on);
	printf("Special Characters : %d\n",special);
	printf("Digits : %d",digits);
}