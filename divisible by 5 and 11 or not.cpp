#include <stdio.h>
int main()
{
    int s1;
    printf("Enter the number: ");
    scanf("%d",&s1);
    if(s1%5==0 && s1%11==0) 
    {
        printf("Number is divisible by 5 and 11.");
    }
    else 
    {
        printf("Number not divisible by 5 and 11");
    }

    return 0;
}
