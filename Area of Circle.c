#include<stdio.h>
int main()
{
    const float pi=3.14 ;
    float area, radius ;
    printf("Enter the radius: ");
    scanf("%f", &radius);
    area = pi*radius*radius ;
    printf("Area of the circle is %f",area);
    return(0);

}
