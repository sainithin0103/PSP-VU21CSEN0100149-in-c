#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// Working of arithmetic operators
int main()
{
    int a = 9,b = 4, c;
    
    c = a+b;
    printf("The addition of two numbers is %d \n",c);
    c = a-b;
    printf("The subtration of two numbers is %d \n",c);
    c = a*b;
    printf("The multipication of two numbers is %d \n",c);
    c = a/b;
    printf("The division of two numbers is %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    
    return 0;
}
