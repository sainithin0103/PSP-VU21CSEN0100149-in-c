#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("enter volume in m^3 ");
	scanf("%d",&a);
	printf("volume in meters cube(m^3) %d",a);
	b=a*100000;
	printf("Volume in centimeters cube(cm^3) %d \n",b);
	c=b*1000;
	printf("area in millimeters cube(mm^3) : %d \n",c);
	return 0;
}
