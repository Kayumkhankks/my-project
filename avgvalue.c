// avr value finder formula      ------> ( item price * related ) +  ( second item same step) + ----- + / (total of all item price )
#include <stdio.h>
  int main () {
  float w1,w2,p1,p2;
   printf ("Enter the price and weight : ");
   scanf("%d %d",&p1,&w1);
   printf ("Enter the price and weight : ");
   scanf("%d %d",&p2,&w2);

    float result = ((w1 * p1 ) + (w2 * p2) / (p1+p2) );
   printf("average value is : %f" , result);
   return 0;
}

