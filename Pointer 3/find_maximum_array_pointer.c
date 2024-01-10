// q3. wap to find maximum from array using pointer
#include<stdio.h>
#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	printf("Enter The Value Size Of Array : ");
	scanf("%d",&n);
	int *ptr;
	int a[n],max=0,i;
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Of Array[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		ptr=&a[i];
		if(*ptr>max)
		{
			max=*ptr;
		}
	}
	printf("%d",max);
}