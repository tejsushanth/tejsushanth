#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter a,b and c");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && a<c)
	printf("a is smallest");
	else if(b<a && b<c)
	printf("b is smallest");
	else
	printf("c is smallest");
}
