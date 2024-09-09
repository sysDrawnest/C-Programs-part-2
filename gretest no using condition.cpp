#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter two no:\n");
	scanf("%d%d",&a,&b);
	c=((a>b)?a:b);
	printf("the gretest no is: %d  ",c);
	getch();
}
