#include <stdio.h>
int fac(int a){
    if (a == 0)
    {
        return 1;
    }
    return a * fac(a-1);
}





  int main () {
  int a ;
  printf("enter your no. : ");
  scanf("%d",&a);

 
  printf("Your ans is  %d",fac(a));
   return 0;
}