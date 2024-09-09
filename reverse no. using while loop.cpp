#include<stdio.h>
#include<conio.h>
int main ()
{
	int n, rem, rev=0;
	printf("Enter a no. to reverse:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("the rev of no. is:%d",rev);
	getch();
}
