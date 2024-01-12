#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *sir;
	sir=fopen("Namo.html","w");
	int age;
	double mobile_no;
	char web_name[20],name[20],address[50],course[30],collage_name[30],color[20],c='"';
	printf("Basic Information Feel\n");
	printf("Enter Your Web Page Name : ");
	gets(web_name);
	printf("Enter Your Web Background Two Color Ex(darkblue,aqua) : ");
	gets(color);
	printf("Enter Your Full Name : ");
	gets(name);
	printf("Enter Your Full Address : ");
	gets(address);
	printf("Enter Your Course Detail : ");
	gets(course);
	printf("Enter Your Collage Name : ");
	gets(collage_name);
	printf("Enter Your Age : ");
	scanf("%d",&age);
	printf("Enter Your Mobile No. : ");
	scanf("%lf",&mobile_no);
	fprintf(sir,"<html>\n");//html
	fprintf(sir,"<head>\n");//head
	fprintf(sir,"<title>\n");//title
	fprintf(sir,"%s",web_name);
	fprintf(sir,"</title>\n");
	char d='%';
	fprintf(sir,"<style>\n");//style
	fprintf(sir,".form{ height: 600px;width: 500px; backdrop-filter: blur(10px); transform: translate(-50%c,-50%c); position: absolute; left: 50%c; top: 50%c;border: 3px solid rgb(110, 110, 110);}",d,d,d,d);
	fprintf(sir,"body\n{background:linear-gradient(%s);}h1{color: white;}h2{color: white;}h4{color: white;}",color);
	fprintf(sir,".shape{height: 800px;width: 600px;backdrop-filter: blur(10px);transform: translate(-50%c,-50%c);position: absolute;left: 50%c;top: 50%c;border: none;}.shape1{height: 200px;width: 200px;background: linear-gradient(to left,rgb(0, 255, 255),rgb(192, 32, 228));border-radius: 50%c;position: absolute;left: 0%c;top: 5%c;}.shape2{height: 200px;width: 200px;background: linear-gradient(to left,rgb(0, 33, 196),rgb(0, 206, 162));border-radius: 50%c;position: absolute;left: 70%c;top: 69%c;}",d,d,d,d,d,d,d,d,d,d);
	fprintf(sir,"</style>\n");

	fprintf(sir,"</head>\n");
	fprintf(sir,"<body>\n");//body
	fprintf(sir,"<table align=%ccenter%c>\n<div class=%cshape%c><div class=%cshape1%c></div><div class=%cshape2%c></div></div>",c,c,c,c,c,c,c,c);//table
	fprintf(sir,"<div class=%cform%c><div align=%ccenter%c><h1>Basic Information<h1></div>\n",c,c,c,c);//Basic
	fprintf(sir,"<div align=%ccenter%c><h2>Your Full Name Is : %s</h2></div>\n",c,c,name);//Name
	fprintf(sir,"<div align=%ccenter%c><h4>Your Full Address Is : %s</h4></div>\n",c,c,address);//Address
	fprintf(sir,"<div align=%ccenter%c><h4>Your Course Is : %s</h4></div>\n",c,c,course);//course
	fprintf(sir,"<div align=%ccenter%c><h4>Your Collage Name Is : %s</h4></div>\n",c,c,collage_name);//collage
	fprintf(sir,"<div align=%ccenter%c><h4>Your Age Is : %d</h4></div>\n",c,c,age);//age
	fprintf(sir,"<div align=%ccenter%c><h4>Your Mobile No. Is : %.0lf</h4></div>\n",c,c,mobile_no);//Mobile_Number
	fprintf(sir,"</div>\n</table>\n");
	fprintf(sir,"</body>\n");//close
	fprintf(sir,"</html>");
}