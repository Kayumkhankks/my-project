#include <stdio.h>
#include <math.h> // for squre root use sqrt() from math hader file
  int main () {
  int x1,x2,y1,y2;
  printf("Enter the value in x and y form : ");
  scanf("%d %d",&x1,&y1);
    printf("Enter the value in x and y form : ");
  scanf("%d %d",&x2,&y2);

float  formula =( (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
printf("distance between wo point is = %.3f",sqrt(formula));
   return 0;
}