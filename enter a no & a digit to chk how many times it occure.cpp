#include<stdio.h>
#include<conio.h>
int main ()
{
	int n, rem, dgt,p=0;
	printf("Enter a no.:");
	scanf("%d",&n);
	printf("Enter a digit to check.:");
	scanf("%d",&dgt);
	while(n>0)
	{
		rem=n%10;
		if(dgt==rem)
		{
			p++;
		}
		n=n/10;
	}
	printf("the digit %d occure in entered no.is\n",dgt);
	printf(" %d times\n",p);
	getch();
}
