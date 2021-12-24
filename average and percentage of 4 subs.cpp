#include<stdio.h>
main()
{
	float a,b,c,d,e,average,percentage;
	printf("enter marks of 5 subjects");
	scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
	average=(a+b+c+d+e)/5;
	percentage=((a+b+c+d+e)/500)*100;
	printf("AVERAGE IS %f",average);
	printf("percentage is %f",percentage);
}
