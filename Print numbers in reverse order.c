/* C Program to Print Natural Numbers in reverse order*/

#include<stdio.h>
int main()
{
  	int n, i;
    printf("From where do you want to write the sequence : ");
  	scanf("%d", &n);

  	printf("List of Natural Numbers from %d to 1 are \n", n);
	for(i = n; i >= 1; i--)
  	{
    	printf(" %d \t", i);
  	}

  	return (0);
}
