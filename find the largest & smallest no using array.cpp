#include<stdio.h>
#include<conio.h>
int main()
{
	int small,large,i,no,num[10];
	printf("enter how many no. you want to enter,to find smalest & gretest no:\n");
	scanf("%d",&no);
	for(i=0;i<no;i++)
	{
		printf("Enter no:%d=",i+1);
		scanf("%d",&num[i]);
	}
	small=num[0];
	large=num[0];
	for(i=0;i<no;i++)
	{
		if(num[i]>large)
		{
			large=num[i];
		}
		if(num[i]<small)
		{
			small=num[i];
		}

	}
	printf("The largest no.is:: %d\n",large);
	printf("The smallest no is:: %d\n",small);
	getch();
}
