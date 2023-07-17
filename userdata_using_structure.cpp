#include<stdio.h>
#include<string.h >
struct userdata
{
	char name[20];
	char roll_no[20];
	int mobile_no[20];
};
 main()
{    

    struct userdata data1;
	printf("Enter your name: ");
	scanf( "%s",&data1.name);
	printf("\nRoll No: ");
	scanf("%s",&data1.roll_no);
	printf("\nMoblie No: ");
	scanf("%s",&data1.mobile_no);
}
