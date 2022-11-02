#include <stdio.h>
int power1(int a , int b ){
    if (b==0)
    {
        return 1;
    
    }
    return a*power1(a,b-1);
    

}




int main()

{
    int a, b;
    printf("Enter the no. :- ");
    scanf("%d", &a);
    printf("Enter the power :- ");
    scanf("%d", &b);

    printf("Your an is :- %d",power1(a,b));
}