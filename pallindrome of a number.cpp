#include<stdio.h>
#include<conio.h>
int main()
{
	long int n,rem,rev=0,temp;
	printf("Enter a number :");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(temp==rev)
	{
		printf("The entered number is a pallindrome");
	}
	else
	{
		printf("The entered number is not a pallindrome");
	}
	getch();
}
