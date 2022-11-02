#include <stdio.h>
int main()
{
    int a;
    printf("Enter size of no. :- ");
    scanf("%d", &a);
    printf("Attention please 0 is defined as not a prime no. and 1 is prime no.\n");

    int arr[a + 1];

    for (int i = 0; i <= a; i++)
    {
        arr[i] = 1;
    }
    arr[0] = 0;
    arr[1] = 0;

    for (int i = 2; i * i <= a; i++) // i*i <= a is refer to root of a is less than equal to a  / √a <= a;
    {
        for (int j = 2 * i; j <= a; j += i)
        {
            arr[j] = 0;
        }
    }
    for (int i = 0; i <= a; i++)
    {
        printf("Your no. %d is : %d\n", i, arr[i]);
    }

    return 0;
}