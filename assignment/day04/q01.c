#include <stdio.h>

int main()
{
	int slno,id;
    char name[20],ph[20],address[20];
    char gender;
    float sal;
    printf("ENTER slno,id,name,gender,salary,phno,address");
    scanf("%d %d %s %c %f %s %s",&slno,&id,name,&gender,sal,ph,address);
    printf("-------\n");
    printf("EMPLOYEE DETAILS\n");
printf("slno id name gender sal ph address\n");
printf("--- --- --- --- --- --- ---");
	return 0;
}
