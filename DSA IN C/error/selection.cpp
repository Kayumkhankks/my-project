 #include <climits>
  #include <iostream>
 using namespace std;
 int main () {
int n ;
cout<<"Enter the size : ";
cin>>n;

    int a[n]  ;
  int i, j, min;
  for (i = 0; i < n-1; i++)
  {
    min = i;
    for (j = i + 1; j < n; j++)
    {
      if (a[j] < a[min])
      {
        min = j;
      }
    }
    
      swap(a[i], a[min]);
     
  }
for ( i = 0; i < n; i++)
{  cout<< a[i] << "\t";}
    return 0;
 }