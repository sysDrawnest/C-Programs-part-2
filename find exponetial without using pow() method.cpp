#include<stdio.h>
#include<conio.h>
int main()
{	
	float num,exp,d=1;
	printf("enter the no: ");
	scanf("%f",&num);
	printf("enter the exponetial: ");
	scanf("%f",&exp);
	for(int i=0;i<exp;i++)
	{
		d=d*num;
	}
	printf("The result is : %f",d);
	getch();
}
