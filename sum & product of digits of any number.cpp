#include<stdio.h>
#include<conio.h>
int sumdigit(int x);
int productdigit(int y);
int main()
{
	int num,result;
	printf("Enter a no to sum their digts : ");
	scanf("%d",&num);
	printf("sum of their digits is : %d",sumdigit(num));
	printf("\nProduct of their digits is : %d",productdigit(num));
	getch();
}
int sumdigit(int x)
{
	int sum=0;
	while(x>0)
	{
	sum=sum+x%10;
	x=x/10;
	}
	return sum;
}
int productdigit(int y)
{
	int prd=1;
	while(y>0)
	{
	prd=prd*(y%10);
	y=y/10;
	}
	return prd;
}
