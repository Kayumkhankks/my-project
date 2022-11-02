#include <stdio.h>
int main()
{
    int m, tot;
    printf("Enter the no. : ");
    scanf("%d", &m);
    tot = m / 100;
    printf("Your amount in 100 INR = %d notes \n", tot);
    m = m - (tot * 100);
    tot = m/50;

    printf("Your amount in 50 INR = %d notes \n", tot);
    m = m - (tot * 50);
  tot = m/20;
    printf("Your amount in 20 INR = %d notes \n", tot);
    m = m - (tot * 20);
  tot = m/10;
    printf("Your amount in 10 INR = %d notes \n", tot);
    m = m - (tot * 10);
  tot = m/5;
    printf("Your amount in 5 INR = %d notes \n", tot);
    m = m - (tot * 5);
  tot = m/1;
    printf("Your amount in 1 INR = %d notes \n", tot);

    return 0;
}