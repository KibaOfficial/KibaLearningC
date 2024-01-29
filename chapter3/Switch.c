#include <stdio.h>

enum Drinks {
    NO_DRINK,
    COLA,
    FANTA,
    SPRITE,
    COFFEE,
    WATER
};

int main(void)
{
    enum Drinks selected_drinks = NO_DRINK;

    printf("Select a drink:\nCola (1)\nFanta (2)\nSprite (3)\nCoffee (4)\nWater (5)\nNumber: ");
    scanf("%d", &selected_drinks);

    switch (selected_drinks)
    {
    case COLA:
    {
        printf("You selected Cola\n");
        break;
    }
    case FANTA:
    {
        printf("You selected Fanta\n");
        break;
    }
    case SPRITE:
    {
        printf("You selected Sprite\n");
        break;
    }
    case COFFEE:
    {
        printf("You selected Coffee\n");
        break;
    }
    case WATER:
    {
        printf("You selected Water\n");
        break;
    }
    default:
    {
        printf("You selected no drink");
        break;
    }
    }

    //printf("**You got %d**\n", selected_drinks);

    return 0;
}
