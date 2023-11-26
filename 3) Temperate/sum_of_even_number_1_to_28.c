#include<stdio.h>
#include<conio.h>

main()
{
//	2. wap to find sum of even number between 1 to 28.
	int even,sum;
	for(int even=1; even<=28; even++)
	{
		if(even%2==0)
		{
			printf("%d even ",even);
			sum=sum+even;
		}		
	}
	printf("\nEven Sum :\n%d",sum);
}