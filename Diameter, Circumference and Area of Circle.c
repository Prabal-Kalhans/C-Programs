#include<stdio.h>
#include<math.h>
double find_Diameter(double radius);
double find_Circumference(double radius);
double find_Area(double radius);
int main()
{
    float radius, diameter, circumference, area;
    printf("Radius of the given circle is  ");
    scanf("%f" , &radius);

    diameter = find_Diameter(radius);
    circumference = find_Circumference(radius);
    area = find_Area(radius);

    printf("\n Diameter of the Circle = %.2f\n" ,diameter);
    printf("\n Circumference of the Circle = %.2f\n" ,circumference);
    printf("\n Area of the Circle = %.2f\n" ,area);

    return(0);
}
double find_Diameter (double radius)
{
    return 2 * radius;
}
double find_Circumference (double radius)
{
    return 2 * M_PI * radius ;
}
double find_Area (double radius)
{
    return M_PI * radius * radius ;
}
