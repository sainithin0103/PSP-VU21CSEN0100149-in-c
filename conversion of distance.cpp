#include <stdio.h>
int main()
{
	float a,b,c,d;
	printf("enter number of kilometers ");
	scanf("%f",&a);
	b=a*1000;
	printf("number of meters is : %f \n",b);
	c=b*100;
	printf("number of centimeters is : %f \n",c);
	d=c*10;
	printf("number of millimeters is: %f \n",d);
	return 0;
}
