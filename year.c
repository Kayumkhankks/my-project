#include <stdio.h>
  int main () {
  int y,w,d;
  printf("Enter the no. of day :- ");
  scanf("%d",&d);

  y = d/365;
  w =(d%365)/7;
  d = d - ((y*365) + (w*7));
  
  printf("Your years %d and weeks is %d  day is  %d" ,y,w,d);
   return 0;
}