#include<stdio.h>
#include<conio.h>
int main()
{
	int large=0,i,num,n;
	printf("How many no u want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the no.%d : ",i+1);
		scanf("%d",&num);
		if(num>large)
			large=num;
	}
	printf("The largest no is: %d",large);
	getch();
}
