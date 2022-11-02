#include <stdio.h>
  int main () {
  int a = 5;
  printf("Enter the no. : ");
  scanf("%d",&a);

  int i,j,s=1;
  for ( i = 1; i <= a; i++)
  {
       printf("%d %d %d\n",i,i*i,i*i*i);
  }
  
   return 0;
}