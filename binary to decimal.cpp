#include<stdio.h>
#include<conio.h>
int main()
{
	int n,j=1,d,rem,dec=0;
	printf("enter a binary no:");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		d=rem*j;
		dec=dec+d;
		j=j*2;
		n=n/10;
	}
	printf("the decimal no. is:%d",dec);
	getch();
}
