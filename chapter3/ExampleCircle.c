#include <stdio.h>

#define PI 3.14159f

int main(void)
{
    // Circle Example
    // 1.) Read the values for r form the user
    //     check if the user input is valid (no negative numbers)
    // 2.) Compute the perimeter and area to the circle
    // 3.) Print the computed values to the console

    float r = 0.0F;

    printf("Please enter te radius: ");
    scanf("%f", &r);

    if (r <= 0.0F)
    {
        fprintf(stderr, "Radius (%f) must be >= 0!\n", r);
        return 1;
    }

    float area = r * r * PI;
    float perimeter = 2 * PI * r;

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}