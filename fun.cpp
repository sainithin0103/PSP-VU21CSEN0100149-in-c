#include <stdio.h>
int main()
{   int a,b,c,d;
	printf("enter area in meters square m^2: ");
	scanf("%d",&a);
	b=a*10000;
	printf("area in centimeters square(cm^2) %d \n",b);
	c=b*100;
	printf("area in millimeters square(mm^2) : %d \n",c);
	
	int e,f,g;
	printf("enter number of hours ");
	scanf("%d",&e);
	f=e*60;
	printf("number of miniutes is : %d \n",f);
	g=f*60;
	printf("number of seconds is : %d \n",g);
	
	float h,i,j,k;
	printf("enter number of kilometers ");
	scanf("%f",&h);
	i=h*1000;
	printf("number of meters is : %f \n",i);
	j=i*100;
	printf("number of centimeters is : %f \n",j);
	k=j*10;
	printf("number of millimeters is: %f \n",k);

	int l,m,n,o;
	printf("enter volume in m^3 ");
	scanf("%d",&l);
	n=l*100000;
	printf("Volume in centimeters cube(cm^3) %d \n",n);
	o=n*1000;
	printf("area in millimeters cube(mm^3) : %d \n",o);

	int p,q,r;
	printf("enter temperature in centigrade ; ");
	scanf("%d",&p);
	q=(p*9/5)+32;
	printf("temperatue in Fahrenheit is: %d \n",q);
	r=p+273.15;
	printf("temperature in kelvin is : %d \n",r);
}
