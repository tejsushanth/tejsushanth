#include<stdio.h>
#include<math.h>
main()
{
	int x1,y1,x2,y2,l;
	printf("enter value of x2");
	scanf("%d",&x2);
	printf("enter value of x1");
	scanf("%d",&x1);
	printf("enter value of y2");
	scanf("%d",&y2);
	printf("enter value of y1");
	scanf("%d",&y1);
	l=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("length of the straight line%d",l);
}
