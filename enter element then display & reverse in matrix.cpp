#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	int mat[3][3];
	printf("enter the 3*3 elements to show matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",& mat[i][j]);
		}
	}
	printf("Entered the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("\nTranspose of entered matrix is:\n");
	for(j=0;j<3;j++)
	{
		for(i=0;i<3;i++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	printf("\nReverse entered the matrix is:\n");
	for(i=2;i>=0;i--)
	{
		for(j=2;j>=0;j--)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	getch();
}
