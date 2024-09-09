#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,large=0;
	printf("Enter 10 no to find largest no:\n\n");
	for(i=0;i<10;i++)
	{
		printf("Enter the %d no:",i+1);
		scanf("%d",&num);
		if(num>large)
		{
			large=num;
		}
	}
	printf("\nThe largest no is: %d",large);
	getch();
}
