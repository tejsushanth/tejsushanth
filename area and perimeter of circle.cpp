#include<stdio.h>
main()
{
	float r,area,perimeter;
	printf("enter the radius");
	scanf("%f",&r);
	area=3.14*r*r;
	perimeter=2*3.14*r;
	printf("area of circle is %f, perimeter of circle is %f",area,perimeter);
}
