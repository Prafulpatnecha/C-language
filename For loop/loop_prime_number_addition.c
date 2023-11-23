#include<stdio.h>
#include<conio.h>

main()
{
//	loop_prime_number_addition
	int a,sum=0,n;
	
			for(a=2; a<=50; a++)
			{
				if(a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0 && a%11!=0 || a==2 || a==3 || a==5 || a==7 || a==11)
				{
					printf("%d ",a);
					printf("prime ");
					sum=a+sum;
				}
			}
			printf("\n");
			printf("%d",sum);
	
}