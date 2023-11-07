#include<stdio.h>
#include<conio.h>

main()
{
	
	int tel;
	printf("Please Enter This No. -->6355199097<-- : ");
	scanf("%d",&tel);
	
	switch(tel)
	{
		case 6355199097 : printf("Thanks For A Calling\n");
		
		int enter;
		printf("Pleace Enter Only 1 and 2 Value\n\n");
		printf("1.Hindi\n");
		printf("2.English\n\n");
		
		printf("Dial Option on value :\n");
		scanf("%d",&enter);
		
		switch(enter)
		{
			case 1:printf("aapane Hindi mein Pravesh Kiya Hai\n\n");
			int del;
			printf("1.takniki samasya ke liye\n");
			printf("2.application mein agar koi truti a rahi hai to dial kare\n\n");
			printf("Dial Option on value :\n");
			scanf("%d",&del);
			switch(del)
			{
				case 1:printf("aapane Jo Vikalp dial kiya hai takniki samasya ke liye\n\n");
				printf("takniki samasya ke liye Hame Khed Hai Hum iske liye shma Chahte Hain Ham is per avashya karyvahi Karenge");
				break;
				case 2:printf("aapane Jo Vikalp dial kiya hai application mein agar koi truti a rahi hai to dial kare\n\n");
				printf("aapki baat technical team se Karai ja rahi hai");
			}
			break;
			case 2:printf("You have entered English\n\n");
			int de;
			printf("1.for technical problem\n");
			printf("2.If there is any error in the application then dial\n\n");
			printf("Dial Option on value :\n");
			scanf("%d",&de);
			
			switch(de)
			{
				case 1:printf("the option you dialed for technical problem\n\n");
				printf("We are sorry for the technical issue, we apologize for this, we will take action on it");
				break;
				case 2:printf("the option you dialed If there is any error in the application then dial\n\n");
				printf("You are being referred to the technical team");
			}
			break;
		}
		default:printf("Your Number is incorrect please redial!");
	}
	
}