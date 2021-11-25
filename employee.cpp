#include <stdio.h>
int main()
{
	int sal,hra,da,ppf,lic,total;
	printf("Enter the salary:");
	scanf("%d",&sal);
	printf("Enter the HRA:");
	scanf("%d",&hra);
	printf("Enter the DA:");
	scanf("%d",&da);
	printf("Enter the PPF:");
	scanf("%d",&ppf);
    printf("Enter the LIC:");
    scanf("%d",&lic);
    total=(sal+hra+da-ppf-lic);
    printf("TOTAL SALARY IS %d:",total);
    return 0;
}
