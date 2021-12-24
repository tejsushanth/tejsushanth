#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,h,n1,n2;
	printf("\nenter a and b");
	scanf("%d%d",&a,&b);
	printf("\nenter no of bits to be left shifted");
	scanf("%d",&n1);
	printf("\nenter no of bits to be right shifted");
	scanf("%d",&n2);
	c=a+b;
	d=a|b;
	e=a^b;
	f=a<<n1;
	g=b>>n2;
	h=~a;
	printf("\n%d&%d=%d",a,b,c);
	printf("\n%d|%d=%d",a,b,d);
	printf("\n%d^%d=%d",a,b,e);
	printf("\n%d<<%d=%d",a,n1,f);
	printf("\n%d>>%d=%d",b,n2,g);
	printf("~%d=%d",a,h);
}
