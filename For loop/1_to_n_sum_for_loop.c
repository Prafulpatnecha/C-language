#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("Enter The Value N : ");
	scanf("%d",&n);
	int sum;
	for(int a=0; a<=n; a++)
	{
		sum=sum+a;
	}
		printf("%d",sum);
}