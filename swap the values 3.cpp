# include <stdio.h>
int main()
{
	int a,b,c;
	a=20;
	b=30;
	c=80;
	a=b;
	b=c;
	c=a;
	printf("\n the value of a is %d",a);
	printf("\n the value of b is %d",b);
	printf("\n the value of c is %d",c);
	return 0;
}
