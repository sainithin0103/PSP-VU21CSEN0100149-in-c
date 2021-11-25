#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter number of hours ");
	scanf("%d",&a);
	b=a*60;
	printf("number of miniutes is : %d \n",b);
	c=b*60;
	printf("number of seconds is : %d \n",c);
	return 0;
}
