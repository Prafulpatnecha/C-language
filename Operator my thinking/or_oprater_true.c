#include<stdio.h>
#include<conio.h>

main()
{
//	|| -> any one condition must be true.
//	0 - 0 -> 0
//	0 - 1 -> 1
//	1 - 0 -> 1
//	1 - 1 -> 1
//	true=1 & false=0
	int a=6;
	int b=20;
	printf("%d",(a<=b) || (a>=b));
//	output=1
}