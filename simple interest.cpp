#include<stdio.h>
main()
{
	float p,t,r,SI;
	printf("enter principle");
	scanf("%f",&p);
	printf("enter time");
	scanf("%f",&t);
	printf("enter rate");
	scanf("%f",&r);
	SI=p*t*r/100;
	printf("simple interest is %f",SI);
}
