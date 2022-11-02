#include <stdio.h>
int sum(int *a, int size)
{
   if (size == 0)
   {
      return 0;
   }
   if (size == 1)
   {
      return a[0];
   }

   int ans = sum(a + 1, size - 1);
   int s = a[0] + ans;

   return s;
}
int main()
{
   int size;
   printf("How many size you have :- ");
   scanf("%d", &size);

   int a[size];
   for (int i = 0; i < size; i++)
   {
      printf("Enter your no. :- ");
      scanf("%d", &a[i]);
   }
   int tot = sum(a, size);

   printf("ans = %d", tot);

   return 0;
}