#include <stdio.h>

int main()
{
    int number;
    int remainder;
    printf("Please enter a valid unsigned integer!\n");
    scanf("%d", &number);
    remainder = number % 3;

    if (remainder != 0)
    {
        printf("The number you entered is not div. by 3!\n");
        printf("The remainder of the operation is: %d\n", remainder);
    }
    else
    {
        printf("The number you entred is div. by 3\n");
    }

    return 0;
}
