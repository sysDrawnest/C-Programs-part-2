#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num[20],n;
	printf("how many no. u want to enter:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter no %d  :",i+1);
		scanf("%d",&num[i]);
	}
	printf("reverse of entered no is:\n");
	for(i=n;i>=1;i--)
	{
		printf("%d\t",num[i]);
	}
	getch();
}
