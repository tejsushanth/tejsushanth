#include<stdio.h>
void main()
{
	int x,y,z;
	z=(x=10,y=20,x+y);
	printf("x=%d,y=%d,z=%d",x,y,z);
	y=(x=15,x+z,z=3);
	printf("x=%d,y=%d,z=%d",x,y,z);
}
