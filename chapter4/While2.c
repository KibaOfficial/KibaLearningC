#include <stdio.h>
#include <stdbool.h>

// break: ends the loop
// continue: end teh current iteration
int main(void)
{

    float user_input;
    float sum = 0.0f;

    while (true)
    {
        scanf("%f", &user_input);

        if (user_input > 10.0)
        {
            continue;
        }

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    }

    printf("sum: %f\n", sum);
    
    return 0;
}