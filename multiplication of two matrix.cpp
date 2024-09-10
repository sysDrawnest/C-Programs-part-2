#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	int mat1[2][3],mat2[3][2],mul[2][2];
	printf("enter the 2*3 elements of 1st matrixes\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("enter the 3*2 elements of 2nd matrixes\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",& mat2[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
				mul[i][j]=0;
				for(k=0;k<3;k++)
				{
					mul[i][j]=mul[i][j]+(mat1[i][k]*mat2[k][j]);
				}
		}
	}
	printf("the multiplication is 2*2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	getch();
}
	
