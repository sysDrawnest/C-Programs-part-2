#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i;
	printf("enter the no. to find its factors : ");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if((a%i)==0)
		printf("%d\t",i);
	}
    getch();
}
