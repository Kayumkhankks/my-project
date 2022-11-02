#include <stdio.h>
 int rotate(int *arr , int d,int n){
   int temp[n],i;
   int k = 0 ;
   for ( i = d; i <  n; i++)
   {
      temp[k] = arr[i];
      k++;
    }for ( i = 0; i < d; i++)
    {
     temp[k] = arr[i];
     k++;
    }
    for ( i = 0; i < n; i++)
    {
        arr[i]=temp[i];
    }
    
    for ( i = 0; i < n; i++)
    {
        printf("%d \t ",arr[i]);
    }
    
    return arr;
   
 }
  int main () {
  int d,n,i;
  printf("Enter the size : ");
  scanf("%d",&n);
    printf("Enter the element for shot : ");
  scanf("%d",&d);
  int arr[n];
 for ( i = 0; i <  n; i++)
 {
 printf("enter the no. : ");
 scanf("%d",arr[i]);
  }
  rotate(arr,d,n);

 


   return 0;
}