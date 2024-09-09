#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c;
	int choice;
	printf("choose the operation what u want to do:\n");
	printf("1.for addition\n");
	printf("2.for substraction\n");
	printf("3.for multiplication\n");
	printf("4.for division\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the value of a & b:");
			scanf("%f%f",&a,&b);
			c=a+b;
			printf("the addition is:%f",c);
			break;
		case 2:
			printf("enter the value of a & b:");
			scanf("%f%f",&a,&b);
			c=a-b;
			printf("the substraction is:%f",c);
			break;
		case 3:
			printf("enter the value of a & b:");
			scanf("%f%f",&a,&b);
			c=a*b;
			printf("the multiplication is:%f",c);
			break;
		case 4:
			printf("enter the value of a & b:");
			scanf("%f%f",&a,&b);
			c=a/b;
			printf("the division is:%f",c);
			break;
		default:
			printf("wrong choice");
			
	}
	getch();
}
