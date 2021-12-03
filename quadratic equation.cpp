#include <math.h>
#include <stdio.h>
int main() {
    int a, b, c, discriminant, root1, root2, RP, iP;
    printf("Enter coefficients a, b and c: ");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    
    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %d and root2 = %d", root1, root2);
    }

    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %d;", root1);
    }

    
    else {
        RP = -b / (2 * a);
        iP = sqrt(-discriminant) / (2 * a);
        printf("root1 = %d+%d and root2 = %d-%d",RP,RP,iP);
    }

    return 0;
} 

