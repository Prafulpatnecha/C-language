#include<stdio.h>
#include<conio.h>
#include<String.h>
//if we write char c = 'B'+32;/ 'c'-32 then c stores 'b' / 'C'
void main()
{
	char i,j;
	int n;
	printf("Enter The Value Of Size Array : ");
	scanf("%d",&n);
	char a[n];
	
	printf("Enter the Value Of Name : ");
	scanf("%s",&a);
	for(i=0; i<n; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	printf("UpperCase : %s",a);
}