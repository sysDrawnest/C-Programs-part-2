#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter a no : ");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	printf("the sum of entered no is : %d ",sum);
	getch();
}
