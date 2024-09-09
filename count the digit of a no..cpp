#include<stdio.h>
#include<conio.h>
int main ()
{
	int n,p=0;
	printf("Enter a no.:");
	scanf("%d",&n);
	while(n>0)
	{
		p++;
		n=n/10;
	}
	printf("the digit of this no. is:%d\n",p);
	getch();
}
