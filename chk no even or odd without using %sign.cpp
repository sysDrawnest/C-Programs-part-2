#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("enter a no to check it even or odd:");
	scanf("%d",&num);
	if(num/2*2==num)
	{
		printf("entered no is even");
	}
	else
	{
		printf("entered no is odd");
	}
	getch();
}
