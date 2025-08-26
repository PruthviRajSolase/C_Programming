#include <stdio.h>

float pi = 3.14;

int main()
{
    int radius;
    float area,circumference;

    printf("Enter the Radius\n");
    scanf("%d",&radius);

    area = (pi)*(radius)*(radius);
    circumference = (2)*(pi)*(radius);

    printf("The area of the circle is %f\n",area);
    printf("The circumference of the circle is %f",circumference);

    
    return 0;
}
