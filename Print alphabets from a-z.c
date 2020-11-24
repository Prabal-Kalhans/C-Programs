#include <stdio.h>
int main()
{
    char i,ch1,ch2;
    printf("Enter any two alphabets: ");
    scanf("%c %c",&ch1,&ch2);
    for(i=ch1; i<=ch2; i++)
{
     printf("%c ",i);
}
    getch();
    return (0);
}
