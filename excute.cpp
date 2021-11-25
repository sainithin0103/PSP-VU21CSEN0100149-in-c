# include <stdio.h>
int main()
{
	int a,b,c,d,e,total,percent,cgpa;
	printf("enter english marks and maths marks: \n");
	scanf("%d %d",&a,&b);
	printf("enter social marks and chemistry marks \n:");
	scanf("%d %d",&c,&d);
	printf("enter physics marks :");
	scanf("%d",&e);
	total=((a+b+c+d+e)/5);
	cgpa=(total*(0.9/10));
	printf("total is %d \n",total);
	printf("cgpa is : %d \n",cgpa);
	if (cgpa>=6)
	{
		printf("your eligible for placements : %d ",cgpa);
	}
	else (cgpa<6);
	{
		printf("your not eligible for placements :%d",cgpa);
    }
}
