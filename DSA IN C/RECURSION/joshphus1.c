#include <stdio.h>
int kill(int n,int k){
    if (n==0)
    {
        return 1;
    }
   return( kill(n-1,k)  + k ) % n;
     
}

  int main () {
  int n,k;
  printf("Enter no. of people :- ");
  scanf("%d",&n);
  printf("Enter killing no. :- ");
  scanf("%d",&k);


  printf("last people standing no. :- %d",kill(n,k));
   return 0;
}