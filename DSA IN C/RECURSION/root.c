#include <stdio.h>
int root(int a)
{
    int s = 0 ;
    int e = a;
    int squ;
    int mid = s +(e-s)/2;
    int ans=-1;
while (s<=e)
 {   squ=mid*mid;
  if (squ ==  a  )
    {
        return mid; 
    }
    if (squ <a){
        ans = mid ;
        s = mid+1;
    
    }else {
        e=mid-1;
    }
 mid = s +(e-s)/2;

    }return ans; 
}
  int main () {
  int a ;
  printf("Enter the no. :" );
  scanf("%d",&a);
 
   
  
  int ans= root(a);
  printf("Your ans is %d ",ans);
   return 0;
}