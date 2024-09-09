#include<stdio.h>
#include<conio.h>
int prime(int);
int main()
{
	int num,i;
	printf("Enter a no. to find its prime factorial:\n");
	scanf("%d",&num);
	printf("The PRIME factors of entered no.is:\n");
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			prime(i);
		}
	}
	getch();
}
int prime(int x)
{
	int j,m=0;
	for(j=1;j<=x;j++)
	{
		if(x%j==0)
		{
			m++;
		}
	}
	if(m==2)
	{
		printf("%d\t",x);
	}
} 
