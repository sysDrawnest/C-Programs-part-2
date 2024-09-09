#include<stdio.h>
#include<conio.h>
void drawline(int n);
int main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	printf("Enter 10 no from 1-50:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	drawline(n1);
	drawline(n2);
	drawline(n3);
	drawline(n4);
	drawline(n5);
	drawline(n6);
	drawline(n7);
	drawline(n8);
	drawline(n9);
	drawline(n10);
	getch();
}
void drawline(int n)
{
	int a=0;
	while(a<=n)
	{
		printf("=");
		a++;
	}
	printf("\n");
}
