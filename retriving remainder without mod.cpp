#include <stdio.h>
int main()
{   
        int n,n1,quotient,reminder;
        printf("Enter two numbers:\n");
        scanf("%d %d",&n,&n1);
        quotient = n/n1;
        reminder = n - quotient * n1;
        printf("Remainder = %d\n",reminder);
        return 0;
}
