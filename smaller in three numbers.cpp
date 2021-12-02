# include<stdio.h>
int main()
{
    int a, b, c,smaller;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if(a<b)
    {
        if(b<c)
            smaller= a;
        else
        {
            if(a<c)
                smaller= a;
            else
                smaller= c;
        }
    }
    else
    {
        if(b<c)
            smaller= b;
        else
            smaller= c;
    }
    printf("\nSmallest number is: %d", smaller);
    return 0;
}
