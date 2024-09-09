#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,m=0;
	printf("enter a no to chk it prime or not: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			m++;
		}
	}
	if(m==2)
	{
		printf("entered no is a prime no.  ");
	}
	else
	{
			printf("entered no.is not a prime no.  ");
	}
	getch();
}
	
	
