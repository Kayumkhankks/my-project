#include <stdio.h>
rotate3(int *arr , int n , int k){
    int temp[n];
    for (int i = 0; i < n; i++)
    {
       temp[(i+k)%n] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i]= temp[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \t",arr[i]);
    }
    
    
}


  int main () {
  int n,k;
  printf("Enter the  size : ");
  scanf("%d",&n);
  int arr[n];
  printf("Enter the shot term : ");
  scanf("%d",&k);
  for (int i = 0; i < n; i++)
  {
    printf("Enter the no. : ");
    scanf("%d",&arr[i]);
  }
  rotate3(arr , n,k);  
   return 0;
}