#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,r,perimeter,s,area_of_triangle,area_of_circle;
    printf("Enter the four integers:\n");
    scanf("%f %f %f %f",&a,&b,&c,&r);
    perimeter=a+b+c;
    printf("The perimeter of the triangle is %.2f\n",perimeter);
    s=a+b+c/2;
    printf("the semiperimeter is %.2f\n",s);
    area_of_triangle=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area of the triangle is %.2f\n ",area_of_triangle);
    area_of_circle=3.14*r*r;
    printf("The area of the circle is %.2f\n",area_of_circle);
    return 0;


}
