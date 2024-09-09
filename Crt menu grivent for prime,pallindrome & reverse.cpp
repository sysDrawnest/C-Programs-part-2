#include<stdio.h>
#include<conio.h>
int main()
{
	int opt;													//variable for switch
	int n1,i,m=0;												//variable for case-1
	int n2,rem,temp,rev=0;										//variable for case-2
	int n3,rem1,rev1=0;											//variable for case-3
	printf("Choose the operation what u want to do:\n\n");
	printf("1:To check the no.is prime or not:\n");
	printf("2:To check the no.is pallindrome or not:\n");
	printf("3:To find the reverse of a no:\n");
	scanf("%d",&opt);
	
	switch(opt)
	{
		case 1:
				printf("Enter no to check prime or not:");
				scanf("%d",&n1);
			
				for(i=1;i<=n1;i++)
				{
					if(n1%i==0)
					{
						m++;
					}
				}
				if(m==2)
				{
					printf("Entered no.is a prime no.");
				}
				else
				{
					printf("Entered no.is not a prime no.");
				}
			break;
		case 2:
				printf("Enter a no to check it pallindrome or not:");
				scanf("%d",&n2);
				temp=n2;
				
				while(n2>0)
				{
					rem=n2%10;
					rev=rev*10+rem;
					n2=n2/10;
				}
				if(temp==rev);
				{
					printf("Enter no.is a pallindrome")
				}
				else
				{
					printf("Entered no.is not a pallindrome");
				}
			break;
		case 3:
				printf("Enter a no to reverse:");
				scanf("%d",&n3);
				while(n3>0)
				{
					rem1=n3%10;
					rev1=rev1*10+rem1;
					n3=n3/10;
				}
				printf("The reverse of no.is:%d",rev1);
			break;
		default:
				printf("Invaild choice");		
	}
	getch();
}
