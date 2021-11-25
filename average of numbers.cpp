#include <stdio.h>
int main()
{
	int a,b,c,f;
	printf("Enter the value a");
	scanf("%d",&a);
	printf("Enter the value b");
	scanf("%d",&b);
	printf("Enter the value c");
	scanf("%d",&c);
	f=(a+b+c)/3;
	printf("The average of three numbers is: %d",f);
	return 0;
}
