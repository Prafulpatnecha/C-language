#include<stdio.h>
#include<conio.h>

void main()
{
	int i,d,n,num,number;
	int a[n+10],b[num+10],c[number+50];
	
	printf("Enter The Size Of 1D Array A : ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Array A[%d] :",i);
		scanf("%d",&a[i]);
		c[i]=a[i];
	}printf("\n");
	
	d=i;
	
	printf("Enter The Size Of 1D Array B : ");
	scanf("%d",&num);
	
	for(i=0; i<num; i++)
	{
		printf("Enter The Value Array B[%d] :",i);
		scanf("%d",&b[i]);
		c[d]=b[i];
		d++;
	}printf("\n");
	
	for(i=0; i<n; i++)
	{
		printf("Enter The Value Array A[%d] : %d\n",i,a[i]);
	}printf("\n");
	
	for(i=0; i<num; i++)
	{
		printf("Enter The Value Array B[%d] : %d\n",i,b[i]);
	}
	
	printf("\n");
//	number=n+num+10;
//	c[number+100];
////	printf("%d",d);
	
	for(i=0; i<d; i++)
	{
		printf("Array C[%d] : %d\n",i,c[i]);
	}
}
//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.
//For example,
//Input:
//Enter array A's size: 5
//
//Enter array A's elements:
//a[0] = 7
//a[1] = 4
//a[2] = 9
//a[3] = 5
//a[4] = 2
//
//Enter array B's size: 3
//
//Enter array B's elements:
//b[0] = 1
//b[1] = 3
//b[2] = 6
//
//Output:
//Array C is: 7, 4, 9, 5, 2, 1, 3, 6
