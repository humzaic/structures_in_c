#include<stdio.h>
struct date
{
int d,m,y;	
};
struct date take();
main()
{
	struct date d1;
	d1 = take();
	printf("\n%d-%d-%d",d1.d,d1.m,d1.y);
}
struct date take()
{
	struct date date1;
	printf("Enter date:");
	scanf("%d%d%d",&date1.d,&date1.m,&date1.y);
	return date1;
	
}
