#include<stdio.h>
int main()
{
    int i, num, p = 0;
    printf("Please enter a number of your choice : ");
    scanf("%d" , &num);
    for( i = 1; i <= num; i++)
    {
        if(num%i == 0)
        {
            p++ ;
        }
    }
    if ( p == 2)
    {
        printf("The entered number %d , is a Prime Number." ,num);
    }
    else
    {
        printf(" Entered number %d , is not a Prime Number." ,num);
    }
}
