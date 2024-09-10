#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,row,clm;
	int mat[10][10];
	printf("enter the row & column of matrix:\n");
	scanf("%d%d",&row,&clm);
	printf("Enter the %dx%d elements of matrix\n",row,clm);
	for(i=0;i<row;i++)
	{
		for(j=0;j<clm;j++)
		{
			scanf("%d",& mat[i][j]);
		}
	}
	printf("Transpose of matrix is\n");
	for(j=0;j<clm;j++)
	{
		for(i=0;i<row;i++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	getch();
}
