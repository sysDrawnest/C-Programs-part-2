#include<stdio.h>
#include<conio.h>
int main()
{
	int marks,div;
	printf("Enter your percentage of marks:");
	scanf("%d",&marks);
	if(marks<100 && marks>=60)
	{
		div=1;
	}
	else if(marks<60 && marks>=45)
	{
		div=2;
	}
	else if(marks<45 && marks>=30)
	{
		div=3;
	}
	switch(div)
	{
		case 1:
		printf("u archive 1st division");
		break;
		case 2:
		printf("u archive 2nd division");
		break;
		case 3:
		printf("u archive 3rd division");
		break;
		default:
		printf("sry u were failed");
	}
	getch();
}
