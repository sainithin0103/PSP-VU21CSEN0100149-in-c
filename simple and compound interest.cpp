#include <stdio.h>
int main()
{  int PA,IR,PS,IS,TS,TC,NC,SI,CI,A;
   printf("Type 0 or 1 0 for compound intrest,1 for simple interest  : ;");
   scanf("%d",&A);
   if (A==0)
   {
   printf("Enter the principal amount ");
   scanf("%d",&PA);
   printf("Enter the interest rate for the period");
   scanf("%d",&IR);
   printf("Enter the tenure");
   scanf("%d",&TC);
   printf("Enter the number of coumpounding periods");
   scanf("%d",&NC);
   CI=PA*((1+(IR/100)/NC)^(NC*TC));
   printf(" Compound interest is : %d \n",CI);
}
   if(A==1)
   {
   
 	 printf("Enter the principal amount  :");
   scanf("%d",&PA);
   printf("Enter the interest rate for the period  :");
   scanf("%d",&IR);
   printf("Enter the tenure");
   scanf("%d",&TS);
   SI=((PA*IR*TS)/100);
   printf("Simple interest is : %d \n",SI);
 
}
return(0);

}
