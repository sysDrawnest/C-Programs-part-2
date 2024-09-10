#include<stdio.h>
#include<conio.h>
int main()
{
	int p=0,q=0,i,num[10];
	printf("enter 10 no.to count how many even & odd:\n");
	for(i=0;i<10;i++)
	{
		printf("number:%d=",i+1);
		scanf("%d",&num[i]);
		if(num[i]%2==0)
		{
			p++;
		}
		else
		{
			q++;
		}
	}
	printf("\neven no.is:%d\n",p);
	printf("odd no.is:%d\n",q);
	getch();
}
