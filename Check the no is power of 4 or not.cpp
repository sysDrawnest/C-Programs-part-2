#include<stdio.h>
#include<conio.h>
int power(int num)
{
	while(num!=1)
	{
		if(num%4!=0)
			return 0;
		num=num/4;
	}
	return 1;
}
int main()
{
	int num;
	printf("Enter a no : ");
	scanf("%d",&num);
	if(power(num))
		printf("\n%d is power of 4 ",num);
	else
		printf("\n%d is not a power of 4 ",num);
	getch();
}
