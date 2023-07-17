#include<stdio.h>
struct date
{
int d,m,y;	
};
void inputdate(struct date d2);

main()
{
	struct date d1;
	printf("Enter date:");
	inputdate(d1);
}
void inputdate(struct date d2)
{
	
	scanf("%d%d%d",&d2.d,&d2.m,&d2.y);
	printf("\n%d-%d-%d",d2.d,d2.m,d2.y);
}

