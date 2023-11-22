#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	int s=1;
	int c=0;
	for(int a=1; a<=10; a++)
	{
		c=n*s;
		printf("%d ",c);
		s++;
	}
		
}