#include <stdio.h>
  int main () {
  float id , salary ;
  int h ;
  printf("Enter the id :- ");
  scanf("%f",&id);

  printf("Working hour's :- ");
  scanf("%d",&h);
  salary = 1500 * h;
 printf("Enter the id :- %f\n",id);
 printf("Your salary is %.2f",salary);

   return 0;
}