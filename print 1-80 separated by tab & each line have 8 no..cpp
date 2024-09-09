#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	for(n=1;n<=80;n++)
	{
		printf("%d\t",n);
		if(n%8==0)
		{
			printf("\n");
		}
	}
	getch();
}
