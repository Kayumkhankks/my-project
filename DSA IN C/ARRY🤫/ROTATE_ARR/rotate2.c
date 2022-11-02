#include <stdio.h>
rotate2(int *arr, int d, int n)
{
    int p = 1;
    int last;
    while (p <= d)
    {
        last = arr[0];
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n-1] = last;
        p++;
    }
}
int main()
{
    int i, d, n;
    printf("Enter the size : ");
    scanf("%d", &n);
    printf("Enter the element for shot : ");
    scanf("%d", &d);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the no. : ");
        scanf("%d", &arr[i]);
    }
    rotate2(arr, d, n);

    return 0;
}