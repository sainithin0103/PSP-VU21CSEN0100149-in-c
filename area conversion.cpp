#include <stdio.h>
int main()
{	 
	int a,b,c,d;
	printf("enter area in meters square m^2: ");
	scanf("%d",&a);
	b=a*10000;
	printf("area in centimeters square(cm^2) %d \n",b);
	c=b*100;
	printf("area in millimeters square(mm^2) : %d \n",c);
	return 0;
}

