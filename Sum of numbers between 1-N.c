/*C Program to add N natural numbers*/

#include <stdio.h>
int main()
{
   int n = 100;
   int sum = (n*(n+1)*(n+2))/2;
   printf("Sum of natural numbers till %d is %d", n,sum);
   return (0);
}
