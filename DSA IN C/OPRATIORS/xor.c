#include<stdio.h>

int main( )
{  
    int arr[10] = {10,20,14,20,14,5,10,50,50};
    int res = 0;
    for (int i = 1; i <= 10; i++)
    {
      res = res^arr[i];

    }
    printf("Your ans is :- %d",res);
    
    return 0;
}
