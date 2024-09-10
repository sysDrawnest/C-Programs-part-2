#include<stdio.h>
#include<conio.h>
int main()
{
	int rollno[10];
	for(int i=1;i<=10;i++)
	{
		printf("Enter the roll no %d :",i);
		scanf("%d",&rollno[i]);
	}
	printf("\nThe rollno you have entered their recverse are:\n");
	for(int i=10;i>0;i--)
	{
		printf("%d\t",rollno[i]);
	}
	getch();
}

