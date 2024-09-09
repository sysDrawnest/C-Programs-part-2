#include<stdio.h>
#include<conio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter a no: ");
	scanf("%d",&n);
	up:
	while(n>0)
	{
		rem=n%10;
		sum=sum+rem;
		n=n/10;
	}
	if(sum>=10)
	{
		printf("the sum of  digit is : %d \n",sum);
		n=sum;
		sum=0;
		goto up;
	}
	printf("the sum of unit digit is : %d  ",sum);
	getch();
}
