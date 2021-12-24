#include<stdio.h>
main()
{
	int a,b,min;
	printf("enter he value for a");
	scanf("%d",&a);
	printf("enter the value of b");
	scanf("%d",&b);
	min=(a<b)? a:b;
	printf("minimum between a and b is %d",min);
}
