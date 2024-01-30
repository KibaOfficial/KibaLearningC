#include <stdio.h>

int main(void)
{
    int num_iteration = 10;

    // for (START; CONDITION; OPERATION;)
    for (int i = 0; i < num_iteration; i++)
    {
        printf("%d\n", i);
    }
    
    for (int i = 0; i < num_iteration; i+=2)
    {
        printf("%d\n", i);
    }

    for (int i = num_iteration - 1 ; i >= 0; i--)
    {
        printf("%d\n", i);
    }

    return 0;
}