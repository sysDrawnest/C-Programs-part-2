#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	int mat1[3][3],mat2[3][3],sum[3][3];
	printf("enter the 3*3 elements of 1st matrixes\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the 3*3 elements of 2nd matrixes\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",& mat2[i][j]);
		}
	}
	//now add two matrix & store it sum
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("the addition of two matrixes are\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
	getch();
}
