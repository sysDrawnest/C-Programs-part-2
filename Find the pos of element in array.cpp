#include<stdio.h>
#include<conio.h>
int main()
{
	int no[10],i,n,pos=0,num;
	printf("How many elements you want to enter between 1 to 10 : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the element %d : ",i+1);
		scanf("%d",&no[i]);
	}
	printf("\nEnter a element to search it to array : ");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(no[i]==num)
			pos=i+1;
	}
	if(pos==0)
		printf("\nThe element %d not found in array.",num);
	else
		printf("\nThe element %d present in the position %d \n",num,pos);
	getch();
}
