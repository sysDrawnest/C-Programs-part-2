#include<stdio.h>
#include<conio.h>
int main()
{
	int fast=0,second=1,i,next,num;
	printf("Enter a no to print fibonacii series upto entered no. : ");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		if(i<=1)
			next=i;
		else
		{
			next=fast+second;
			fast=second;
			second=next;
		}
		printf("%d\t",next);
	}
	getch();
}
