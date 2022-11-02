#include <stdio.h>
int power(int a, int b)
{
    if (a == 0)
    {
        return 0;
    }

    if (b == 0)
    {
        return 1;
    }
    int as = power(a, b / 2);
    if (b % 2 == 0)
    {
        return as * as;
    }
    else
    {
         return a * as * as;
    }
}
int main()
{
    int a, b;
    printf("Enter the no. :- ");
    scanf("%d", &a);
    printf("Enter the power :- ");
    scanf("%d", &b);

   
    printf("Your ans is :-< %d >/n", power(a, b));
    
    return 0;
}