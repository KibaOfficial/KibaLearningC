#include <stdio.h>
#include <stdbool.h>

int main(void)
{

    float user_input;
    float sum = 0.0f;

    do
    {
        scanf("%f", &user_input);

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    } while (sum < 10.0f);    

    printf("sum: %f\n", sum);
    
    return 0;
}