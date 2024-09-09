#include<stdio.h>
#include<conio.h>
int main()
{
	float num1,num2,sum,sub;
	printf("enter the 1st & 2nd no.: ");
	scanf("%f%f",&num1,&num2);
	if(num1>num2)
	{
		printf("The 1st no is gretter\n");
		sub=num1-num2;
		printf("The difference between them:%f",sub);
	}
	else
	{
		printf("The 2nd no is gretter\n");
		sum=num1+num2;
		printf("The sum of two nos:%f",sum);
	}
	getch();
}
