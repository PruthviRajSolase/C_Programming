#include <stdio.h>
#include <math.h>

int main() {
    float radius, area;

    // Ask user to input the radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area using πr²
    area = M_PI * radius * radius;

    // Print the result
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}



To save in github
1. git add .
2. git commit -m 'Comment for the saving data'
3. git push origin main
