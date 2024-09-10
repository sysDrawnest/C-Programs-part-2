#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0,i,no[10];
	for(i=0;i<10;i++)
	{
		printf("Enter the no %d :",i+1);
		scanf("%d",&no[i]);
		sum=sum+no[i];
	}
	printf("The sum of these no are:%d",sum);
	getch();
}

