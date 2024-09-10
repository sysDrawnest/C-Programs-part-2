#include<stdio.h>
#include<conio.h>
void check(int num);
int main()
{
	int arr[5],i;
	printf("Enter 5 element\n");
	for(i=0;i<5;i++)
	{
		printf("Enter no:%d : ",i+1);
		scanf("%d",&arr[i]);
		check(arr[i]);
	}
	getch();
}
void check(int num)
{
	if(num%2==0)
		printf("Entered no is a even no.\n");
	else
		printf("Entered no is a odd no.\n");	
}
