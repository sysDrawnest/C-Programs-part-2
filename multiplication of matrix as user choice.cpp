#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,row1,clm1,row2,clm2;
	int mat1[10][10],mat2[10][10],mul[10][10];
	printf("Enter the row and column of 1st matrix\n");
	scanf("%d%d",&row1,&clm1);
	printf("Enter the row and column of 2nd matrix\n");
	scanf("%d%d",&row2,&clm2);
	if(clm1==row2)
	{
		printf("enter the %dx%d elements of 1st matrixes\n",row1,clm1);
		for(i=0;i<row1;i++)
		{
			for(j=0;j<clm1;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}
		printf("enter the %dx%d elements of 2nd matrixes\n",row2,clm2);
		for(i=0;i<row2;i++)
		{
			for(j=0;j<clm2;j++)
			{
				scanf("%d",& mat2[i][j]);
			}
		}
		//then multiplication
		for(i=0;i<row1;i++)
		{
			for(j=0;j<clm2;j++)
			{
					mul[i][j]=0;
					for(k=0;k<clm1;k++)
					{
						mul[i][j]=mul[i][j]+(mat1[i][k]*mat2[k][j]);
					}
			}
		}
		printf("The multiplication is %dx%d matrix:\n",row1,clm2);
		for(i=0;i<row1;i++)
		{
			for(j=0;j<clm2;j++)
			{
				printf("%d\t",mul[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("In multiplication column of 1st matrix is must be equal to row of 2nd matrix");
	}
	getch();
}
	
