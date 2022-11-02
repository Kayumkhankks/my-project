#include <stdio.h>
  int main () {
  int a;
  printf("Enter the no. : ");
  scanf("%d",&a);

  int i,j;
  for ( i = 1; i <= a; i++)
  {
    for ( j = 1; j <= 3; j++)
    {
        printf("%d ",i);
        i= i+1;
    }
    i--;
        printf("\n");
    
  }
  
   return 0;
}