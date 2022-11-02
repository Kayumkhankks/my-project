#include <stdio.h>
int main()
{
  int h, m, s, sec;
  printf("Enter the second : ");
  scanf("%d", &sec);
  h = (sec / 3600);

  m = (sec - (3600 * h)) / 60;

  s = (sec - (3600 * h) - (m * 60));

  printf("Your time is %d : %d : %d", h, m, s);
  return 0;
}