#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	int ch;
	
	do
	{
	printf("Enter the value of a & b:\n");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("the addition is %d\n",c);
	printf("do u want to do another sum?:\n");
	printf("enter 1 to continue:\n");
	scanf("%d",&ch);
	}
	while(ch==1);
}
