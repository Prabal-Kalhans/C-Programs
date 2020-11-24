#include <stdio.h>
int main()
{
    int n, sum=0, FirstDigit, LastDigit;
    printf("Enter the number to find sum of first and last digits : ");
    scanf("%d", &n);
    LastDigit = n % 10;
    while(n >= 10)
    {
        n = n / 10;
    }
    FirstDigit = n;
    sum = FirstDigit + LastDigit;
    printf("Sum of first and last digits of the given number is %d", sum);
    return (0);
}
