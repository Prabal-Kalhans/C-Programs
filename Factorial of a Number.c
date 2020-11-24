#include<stdio.h>
int main()
{
    int c, n, f = 1 ;
    printf("Please enter the number you want the factorial of : ");
    scanf("%d", &n);
    for( c = 1 ; c <= n ; c++)
    f = f * c ;
    printf("Factorial of the given number %d = %d\n" , n, f);
    return(0);
}
