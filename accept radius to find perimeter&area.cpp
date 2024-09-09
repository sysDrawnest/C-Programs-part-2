#include<stdio.h>
#include<conio.h>
int main()
{
	float rad,area,perimeter,pi=3.141;
	printf("Enter the radius of the circle :");
	scanf("%f",&rad);
	area=pi*rad*rad;
	perimeter=2*pi*rad;
	printf("Area of this circle is: %f\n",area);
	printf("Perimetre of this circle is: %f\n",perimeter);
	getch();
}
