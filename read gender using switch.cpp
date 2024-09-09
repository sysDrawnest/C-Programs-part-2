#include<stdio.h>
#include<conio.h>
int main()
{
	int choice;
	printf("choose ur gender");
	printf("\n 1. male");
	printf("\n 2. female\n");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
		printf("u choose male");
		break;
		case 2:
		printf("u choose female");
		break;
		default:
		printf("u chhose wrong choice");
	}
	getch();
}
