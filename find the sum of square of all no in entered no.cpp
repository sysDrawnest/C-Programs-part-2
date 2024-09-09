#include<stdio.h>
#include<conio.h>
int main()
{
	int num,square,sum=0;
	printf("Enter a no to find sum of sqrt:");
	scanf("%d",&num);
	for(int i=0;i<=num;i++)
	{
		square=i*i;
		sum=sum+square;
	}
	printf("Sum of square root is: %d",sum);
	getch();
}
