#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	int s=1;
	for(int a=1; a<=n; a++)
	{
		s=s*a;
	}
		printf("%d",s);
}