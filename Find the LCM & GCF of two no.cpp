#include<stdio.h>
#include<conio.h>
int main()
{
	int l,a,b,h;
	printf("Enter two no. :\n");
	scanf("%d%d",&a,&b);
	for(l=(a>b?a:b);l<a*b;l=l+(a>b?a:b))		//we can write for(l=1;l<a*b;l++)
	{
		if(l%a==0 && l%b==0)
		break;
	}
	for(h=(a<b?a:b);h>1;h--)
	{
		if(a%h==0 && b%h==0)
		break;
	}
	printf("LCM of entered no.is : %d\n",l);
	printf("GCF of entered no.is : %d\n",h);
	getch();
}
