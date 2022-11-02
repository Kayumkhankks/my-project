#include <stdio.h>
int main()
{

    int n;
    printf("Enter the size :");
    scanf("%d", &n);
    int arr[n]  ;
    int min = arr[0], i, j;
    for (i = 0; i < n; i++)
    {
    fflush(stdin);
        printf("Enter the no. :- ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        

            if (min > arr[i])
            {
                min = arr[i];
            }
         
    }
    printf("Your min no.  is : %d", min);

    return 0;
}