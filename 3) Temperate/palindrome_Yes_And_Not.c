#include<stdio.h>
#include<conio.h>

main()
{
	int n,a,b,num;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		a=n%10;
		b=b*10+a;
		printf("%d = %d * 10 + %d \n",b,b,a);
		n=n/10;
	}
	printf("\n");
	if(num == b)
	{
		printf("%d You Entered Palindrome",num);
	}
	else
	{
		printf("%d You Does Not Entered Palindrome",num);
	}
}