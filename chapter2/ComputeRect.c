#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    // initial variables
    float a;
    float b;

    // getting user input
    printf("Enter value for the first corner: ");
    scanf("%f", &a);
    printf("Enter value for the second corner: ");
    scanf("%f", &b);

    float perimeter = 2.0F * a + 2.0F * b;
    float area = a * b;

    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    return 0;
}
