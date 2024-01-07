#include<stdio.h>
#include<conio.h>

void main()
{
	int q,l=1,s=0,n=1,k=1,b,i,j,o=1,p,a=8;
	
	printf("Plece Enter Only 1 To 10 Any Number!!");
	printf("Enter The Value N :");
	scanf("%d",&q);
	printf("\n");
	p=q+1;
	for(i=1; i<=q; i++)
	{
		for (b=2; b<=i ;b++)
		{
			printf(" - ");
		}
		for(j=i; j<=p; j++)
		{
			if(o!=65)
			{
				printf(" %d",o);
				o=o+k;
				k++;
			}
		}
		k=k-3;
		o=o-2;
		for(s=1; s<=a; s++)
		{
			printf(" %d",o);
			k--;
			o=o+k;
		}
		a--;
		o=l;
		n++;
		k=n;
		o=o+k;
		l=o;
		printf("\n");
	}	
}
