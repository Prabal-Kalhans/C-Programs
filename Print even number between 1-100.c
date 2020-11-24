/*C Program to print all even numbers between 1 and 100*/

#include<stdio.h>
int main()
{
    int i,n ;
    printf("Enter the maximum value: ");
    scanf("%d",&n);
    printf("Even numbers between 1 and %d are : \n",n);
    for(i = 1; i <= n; i++)
    {
        if ( i % 2 == 0 )
        {
            printf("%d\t",i);
        }
    }
    return(0);
}
