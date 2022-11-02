#include <stdio.h>
int sum(int a){
    if (a==0)
    {
        return 0;
    }
    if (a==1)
    {
        return 1;
    }
    return a+sum(a-1);
}




  int main () {
  int a ;
  printf("Enter the no. :- ");
  scanf("%d",&a);

  printf("Your ans is :- %d ", sum(a));
   return 0;
}