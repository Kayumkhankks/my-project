
#include <stdio.h>
#include<string.h>
  int main () {
  
int i , j ;
char a[10],b[10];

printf("Enter the name :- ");
gets(a);

j= 0;

for ( i = strlen(a)-1; i >= 0; i--)
{
    
    b[j] = a[i];
    j++;
}
b[j] = '\0';
printf("Your revers name is :- %s",b);

   return 0;
}