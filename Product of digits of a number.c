#include<stdio.h>
int main()
{
    int num, rem, prod = 1;
    printf("Enter a number of your choice : ");
    scanf("%d", &num);
    while(num != 0)
    {
        rem = num % 10;
        prod *= rem;
        num /=  10;
    }
    printf("Product of first and last digits of the given number is %d", prod);
    return 0;
}
