#include<stdio.h>
#include<conio.h>
int main()
{
	float num1,num2,num3,num4,num5,per,sum,total;
	printf("Entre the 5 subjects mark:\n");
	scanf("%f%f%f%f%f",&num1,&num2,&num3,&num4,&num5);
	sum=num1+num2+num3+num4+num5;
	printf("Entre the total mark: ");
	scanf("%f",&total);
	per=(sum/total)*100;
	printf("Your percentage is: %f\n",per);
	getch();
}
