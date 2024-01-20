#include <stdio.h>

int main(void)
{
    float my_balance         = 1725.45F;
    printf("My balance: %f\n", my_balance);

    float money_from_website = 5.0F;
    float doner_price =5.0F;

    my_balance = my_balance + money_from_website;
    printf("My balance: %f\n", my_balance);

    my_balance = my_balance - doner_price;
    printf("My balance: %f\n", my_balance);

    return 0;
}
