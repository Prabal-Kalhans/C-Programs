#include <stdio.h>
int main()
{
    int n, sum=0, FirstDigit, LastDigit;
    printf("Enter a number of your choice : ");
    scanf("%d", &n);
    LastDigit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    FirstDigit = n;
    printf("First Digit = %d  \nLast Digit = %d", FirstDigit,LastDigit);
    return (0);
}
