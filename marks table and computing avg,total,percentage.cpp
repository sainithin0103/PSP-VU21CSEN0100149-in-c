#include <stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i;
	printf("enter the marks in english");
	scanf("%d",&a);
	printf("enter the marks in social");
	scanf("%d",&b);
	printf("enter the marks in physics");
	scanf("%d",&c);
	printf("enter the marks in chemistry");
	scanf("%d",&d);
	printf("enter the marks in maths");
	scanf("%d",&e);
	printf("Marks in English: %d \n",a);
	printf("Marks in Social: %d \n",b);
	printf("Marks in Physics: %d \n",c);
	printf("Marks in Chemistry: %d \n",d);
	printf("Marks in Maths: %d \n",e);
	f=a+b+c+d+e;
	printf("Total of five subjects is : %d \n",f);
	g=f/5;
	printf("Average of five subjects is : %d \n",g);
	h=((a+b+c+d+e)*100/500);
	printf("Percentage of marks obtained in five subjects: %d \n",h);
	return 0;
}
