#include<stdio.h>
main()
{
	int a;
	printf("enter a");
	scanf("%d",&a);
	
	if ((a%3==0)&&(a%5==0))
	
	printf("a is divisibvle by 3 and 5");
	
	if(a%3==0)
	
	printf("a is divisible by 3");
	
	else if(a%5==0)
	
	printf("a is divisible by 5");
	
	else
	
	printf("the number is not divisible by 3 or 5");
}
