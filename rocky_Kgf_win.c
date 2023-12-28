#include<stdio.h>
#include<conio.h>
#include<string.h>

int part1()
{
	int gun=20;
	return gun;
}

int part2()
{
	int gun=20;
	return gun;
}

int part3()
{
	int gun=20;
	return gun; 
}

int des(int go,int go1,int go2)
{
	int x= 30+go+go1+go2;
	return x;
}

int rocky()
{
	int rocky=10+des(part1(),part2(),part3());
	return rocky;
}

void main()
{
	printf("%d",rocky());
}
