#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Only 1 To 10 Enter \n ");
	printf("Enter The Value Of Skip : ");
	scanf("%d",&a);
	for(int b=1; b<=10; b++)
	{
		if(b==a)
		{
			continue;
		}
		printf("%d ",b);
	}

}