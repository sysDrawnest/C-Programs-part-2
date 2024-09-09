#include<stdio.h>
#include<conio.h>
int main()
{
	int num,base=1,rem,binary=0;
	printf("Enter a decimal no:\n");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%2;
		num=num/2;
		binary=binary+rem*base;
		base=base*10;	
	}
	printf("Binary no is:: %d  ",binary);
	getch();
}
