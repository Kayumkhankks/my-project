    #include <stdio.h>
      int main () {
      int a,b;
      printf("Enter the  two no.  :- \n  ");
      scanf("%d \n %d",&a,&b);
      
       a= a^b;
       b=a^b;
       a=a^b;
      printf("Your a is :- %d and b is :- %d ",a,b);

      
       return 0;
    }
