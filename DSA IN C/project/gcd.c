#include <stdio.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
 
    return   gcd(b, a % b);;
}

int main()
{
    int a, b;
    printf("Enter two no. for GCD ");
    scanf("%d \n %d", &a, &b);

    printf("You ans is :- %d", gcd(a, b));
    return 0;
}