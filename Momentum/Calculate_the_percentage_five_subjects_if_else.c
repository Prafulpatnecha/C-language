#include<stdio.h>
#include<conio.h>

main()
{
//5. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//    Calculate the percentage and grade according to the following
//        Percentage >= 90% : Grade A
//        Percentage >= 80% : Grade B
//        Percentage >= 70% : Grade C
//        Percentage >= 60% : Grade D 
//        Percentage >= 50% : Grade E
//        Percentage >= 40% : Grade F
	
	int a,b,c,d,e,total,per;
//	subjects Physics, Chemistry, Biology, Mathematics and Computer
	printf("Enter Your Marks\n\n");
	
	printf("Physics :");
	scanf("%d",&a);
	printf("Chemistry :");
	scanf("%d",&b);
	printf("Biology :");
	scanf("%d",&c);
	printf("Mathematics :");
	scanf("%d",&d);
	printf("Computer :");
	scanf("%d",&e);
	
	total=a+b+c+d+e;
	per=(100*total)/500;
	printf("Marks Total : %d\n",total);
	printf("Percentage : %d\n\n",per);
	
	if(per>=0 && per<=30)
	{
		printf("You Are fail");
	}
//        Percentage >= 40% : Grade F
	else if(per>40 && per<=50)
	{
		printf("Pass : Grade F");
	}
//        Percentage >= 50% : Grade E
	else if(per>=50 && per<=60)
	{
		printf("Pass : Grade E");
	}
//        Percentage >= 60% : Grade D 
	else if(per>=60 && per<=70)
	{
		printf("Pass : Grade D");
	}
//        Percentage >= 70% : Grade C
	else if(per>=70 && per<=80)
	{
		printf("Pass : Grade C");
	}
//        Percentage >= 80% : Grade B
	else if(per>=80 && per<=90)
	{
		printf("Pass : Grade B");
	}
//        Percentage >= 90% : Grade A
	else if(a>=90 && a<=100)
	{
		printf("You Are Topper : Grade A");
	}
}