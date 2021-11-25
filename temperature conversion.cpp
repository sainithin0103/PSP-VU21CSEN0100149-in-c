#include <stdio.h>
int main()
{
	int f,c;
	printf("enter temperature in faranhite ; ");
	scanf("%d",&f);
    c=((f-32)*5/9);
    printf("temperature after conversion to centigrade : %d",c);
	return 0;
}
