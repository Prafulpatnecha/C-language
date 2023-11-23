#include<stdio.h>
#include<conio.h>

main()
{
	int b;
	printf("Enter The Value Of Break : ");
	scanf("%d",&b);
	for(int a=1; a<=10; a++)
	{
		printf("%d ",a);
		if(a==b)
		{
			break;
		}
	}
}