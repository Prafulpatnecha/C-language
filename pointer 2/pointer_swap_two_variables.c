#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	int x,y,z;
	printf("Enter The Value X : ");
	scanf("%d",&x);
	printf("Enter The Value Y : ");
	scanf("%d",&y);
	int *ptx=&x;
	int *pty=&y;
	int *ptz=&z;
	*ptz=*ptx;
	*ptx=*pty;
	*pty=*ptz;
	printf("X : %d\n",x);
	printf("Y : %d",y);
}
// q.3 wap to swap two variables without using the third variable and using a pointer.