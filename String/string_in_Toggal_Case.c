#include<stdio.h>
#include<conio.h>
#include<String.h>

void main()
{
	int n;
	printf("Enter The Value Of Array Size : ");
	scanf("%d",&n);
	char a[n];
	printf("Enter The String Of Array : ");
	scanf("%s",&a);
	int i=0;
	if(a[0]>='a' && a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	printf("%s",a);
}