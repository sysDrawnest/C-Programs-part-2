#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,a1,a2,x;
	printf("enter the value of a,b,c :\n");
	scanf("%f%f%f",&a,&b,&c);
	x=sqrt((b*b)-(4*a*c));
	a1=(-b+x)/(2*a);
	a2=(-b-x)/(2*a);
	printf("the values of roots a1 & a2 are ::  %f  and  %f",a1,a2);
	getch();
}
